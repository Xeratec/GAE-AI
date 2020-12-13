
# AI based Guitar Amplifier Emulation

The goal of this project is to emulate a real guitar amplifier with neural networks in real-time on a Cortex M7 MCU (STM32F767). The project was part of graded a course at ETH Zurich. The implementation is based on the following papers:

> Wright, Alec & Damskägg, Eero-Pekka & Juvela, Lauri & Välimäkgi, Vesa. (2020). *Real-Time Guitar Amplifier Emulation with Deep Learning*. Applied Sciences. 10. 766. 10.3390/app10030766.

> Schmitz, Thomas & Embrechts, Jean Jacques. (2018). *Introducing a Dataset of Guitar Amplifier Sounds for Nonlinear Emulation Benchmarking*.

The dataset used for training and validation are:
*  Dataset by Schmitz et al. (2018) (Mesa550, MesaMarkV)  
   [Download Link](<https://services.montefiore.uliege.be//acous/STSI/downloads.php>) 
*  Own recordings (OrangeMicroDarkData, Randall_RG100)  
   [Download Link](<https://github.com/Xeratec/GAE-AI/tree/master/Datasets>)

-------------------------------------------------------------------------------------------


## Usage
This section is not yet completed!
1. **Install [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html) or your editor of choice.**  
   *(Provide more information on that)*
2. **Build the project**  
   *(Provide more information on that)*
3. **Generate C Files for Audio**  
   *(Provide more information on that)*
4. **Upload and predict output**  
   *(Provide more information on that)*

## Overview
Different models were tested and compared to each other.
In order to ensure perfect real time operation, the audio should be sampled with 44100Hz which results in a inference time of 22.676 us. By listing to the same track with different sample rates it was concluded that 11.025 kHz with 8bit should be sufficient for a satisfying sound experience. This results in an inference time of at least 90.71 us. Unfortunately, due to the hardware limitation, this goal has not yet been reached.

In order to generate a realistic result, the output of the both the amplifier and the neural networks were convoluted with the impulse response of a loudspeaker.
In theory the network could also learn this convolution step, but it was discovered, that the results are more accurate and smaller models can be used, if this convolution is separated. Further, with the help of a simple DSP, this step does not require a lot of time or energy.

**Used Libraries**
| Library    | Version |
|----------- | ------- |
| Tensorflow | 2.3.0   |
| Keras      | 2.4.0   |
| Scipy      | 1.4.1   |
| Numpy      | 1.18.5  |
| Soundfile  | 0.10.3  |
   
### 1. Model Selection
All models are based on dilated convolution as used in the WaveNet. The accuracy of the models was measured using the error-to-signal-ration (ESR), which was also used as the loss function during training. 

Version 1 was a TensoFlow Keras float model and using softsign activation functions.

| Model        | Complexity   | ESR    |          
| ------------ | -----------: | -----: |
| **01_WN10**  |  148288 MACC | 16.97% |
| **01_WN12**  |  380144 MACC |  8.54% |
| **01_WN18**  | 5122630 MACC |  1.47% |

During the second and third iteration it was discovered that *softsign* activation functions are not supported by the current implementation of TensorFlow Lite Micro. Therefore, the *tanh* function was used for further analysis. 

Unfortunately, currently X-Cube-AI is not able to handle TFL models containing convolutional layers with dilation factor other than one.

| Model                | Complexity       | ESR       |
| -------------------- | ---------------: | --------- |
| **04_WN12**          |  149343 MACC     | 16.44%    |
| **04_WN12_tfl**      |  238575 MACC     | 44.40%    |
| **04_WN12_tfl_int8** |  ? MACC          | 44.39%    |

The error induced by the conversion seems to be quite large. But after applying the convolution with the loudspeaker impulse response, the results still sounds pretty good.

### 2. Model inference time
After analysing the effects of dilated convolution and quantization, it was discovered, that TensorFlow Lite Micro was not able to handle quantized integer models as good as X-Cube-AI. The reasons for the large inference time is still unknown.

| Type        | Dilation | MACC    | Runtime             
| :---------: | :------: | ------: | ----------------
| **Float32** | No       |  239335 |  19.5 ms
| **Float32** | Yes      |  149343 |  13.0 ms
| **Int8**    | No       |  131838 |  4.14 ms (TFL 32.2 ms)
| **Int8**    | Yes      |       ? |  N.A. ms (TFL 42.6 ms)

As already mentioned, the inference time is too large to allow for real-time applications. 

| Model                   | Complexity      | Inference   | Description                   
| ----------------------- | ---------------:| ---------:  |-------------
| **01_WN10**             |  148288 MACC    |   6.71 ms  | X-Cube-AI
| **01_WN12**             |  380144 MACC    |  16.93 ms  | X-Cube-AI
| **01_WN18**             | 5122630 MACC    | 223.34 ms  | X-Cube-AI
| **04_WN12**             |  149343 MACC    |  13.01 ms  | X-Cube-AI
| **04_WN12_tfl**         |  238575 MACC    |  18.14 ms  | X-Cube-AI
| **04_WN12_tfl**         |  238575 MACC    |  20.30 ms  | TFL 2.4.0
| **04_WN12_tfl_int8**    |  ?????? MACC    |  42.68 ms  | TFL 2.4.0

Throughout the project different settings for the compiler optimization and versions of the TensorFlow Lite Framework were compared.

| Model                | Optimization | Cache | X-Cube-AI | TFL 2.5.0  | TFL 2.4.0   | TFL 2.3.1             
| ---------------------| ------------ | :---: |---------: | ---------: | ----------: | ---------:
| **04_WN12_tfl**      | -O 3         |  Yes  | 18.14 ms  |   20.44 ms |   20.30 ms  |   23.83 ms
| **04_WN12_tfl_int8** | -O 3         |  Yes  |        -  |   42.70 ms |   42.68 ms  |   35.28 ms  
| **04_WN12_tfl**      | -O 0         |  Yes  | 18.05 ms  |  181.20 ms |  177.30 ms  |  170.60 ms 
| **04_WN12_tfl_int8** | -O 0         |  Yes  |        -  | 1182.70 ms | 1188.34 ms  |  999.82 ms 
| **04_WN12_tfl**      | -O 3         |  No   | 54.00 ms  |   70.25 ms |   68.00 ms  |   79.91 ms
| **04_WN12_tfl_int8** | -O 3         |  No   |        -  |  158.30 ms |  161.02 ms  |  123.84 ms
| **04_WN12_tfl**      | -O 0         |  No   | 54.40 ms  |  605.82 ms |  582.85 ms  |  573.78 ms  
| **04_WN12_tfl_int8** | -O 0         |  No   |        -  | 3763.73 ms | 3563.90 ms  | 3111.59 ms 

### 3. User application to process real data
*(Provide more information on that)*