## Detailed Report
This section elaborates the used process to implement the AI based Guitar Amplifier Emulation on a STM32F767 MCU. These were the guidelines for the project.

**Timetable**  
* Design your Machine learning algorithm (Expected latest by 6.12)
  * Evaluate different algorithm to maximize the accuracy
  * Evaluate the impact on the complexity
  * Trade of Complexity (and time) Memory, Accuracy
* Implement it and test on the real platform (Expected latest by 14.12)
  * Optimize the code
  * Performance evaluation
* Final Presentation will in the week 15-18 of December.

**Evaluation**
* Difficulty of the project
* Performance evaluation and comparison of more than one algorithm
* Comparison with state of the art and papers
* Implementation
* Libraries and reusable code
* Challenge your colleagues
* Impressive demo (Not mandatory but welcome...)

**Presentation**
* Introduction, motivation, dataset, application.
* Architecture of propose Algorithms
* Preliminary Comparison and decision of the network
* Implementation and optimization
* Plots/figures with experimental evaluation

### **1. Train different Keras TensorFlow models based on the paper by Wright, et al. (2020)**  
In the paper two main architectures are mentioned. Firstly, a modified version of the original WaveNet architecture, which now only uses feedforward and dilated convolution, to increase the receptive field. Secondly, an RNN (Recurrent Neural Network) model, based on LSTM (Long-Short-Term-Memory) units. 

The first trained model during this project was the mentioned delated convolutional network.

### **2. Optimize model with different methods**  
There are various constraints that should be fullfield.  
- **Memory constraints**  
  CNN should fit in L2 memory (512 kB)
- **Process speed**  
  By listing to the same track with different sample rates it was concluded that 11.025 kHz with 8bit should be sufficient for a satisfying sound experience. This results in an inference time of at least 90.71 us.

  | Sample Rate | Period    | Bandwidth 1x16bit | Bandwidth 1x8bit |
  | ----------: | --------: | ----------------: | ---------------: |
  | 44100 Hz    |  22.68 us | 705.5 kbit/s      | 352.8 kbit/s     |
  | 32000 Hz    |  31.25 us | 512.0 kbit/s      | 256.0 kbit/s     | 
  | 22050 Hz    |  45.35 us | 352.8 kbit/s      | 176.4 kbit/s     | 
  | 16000 Hz    |  62.40 us | 256.0 kbit/s      | 128.0 kbit/s     | 
  | 11025 Hz    |  90.70 us | 176.4 kbit/s      |  88.2 kbit/s     | 
  | 8000 Hz     | 125.00 us | 128.0 kbit/s      |  64.0 kbit/s     | 
  
  As a reference, the bandwith of the music streaming platform Spotify are:
  |              | Spotify Free | Spotify Premium |
  | :----------: | ------------:| --------------: |
  | Web Player   | 128 kbit/s   | 256 kbit/s      |
  | Low          |  24 kbit/s   |  24 kbit/s      |
  | Normal       |  96 kbit/s   |  96 kbit/s      |
  | High         | 160 kbit/s   | 160 kbit/s      |
  | Ultra High   | -            | 320 kbit/s      |
  <small><i>Source: <a href='https://support.spotify.com/us/article/high-quality-streaming/'>Spotify</a></i></small>

There are different methods to optimize the model for embedded devices.  
- Quantization-Aware Training
- Post-Training Quantization

### **3. Deploy and evaluate model on MCU**  
There are different toolchains and platforms to deploy a neural network.  
- STM32CubeMX\.AI (Fully automated toolchain)
- TensorFlow Lite Micro
- Neural Network on Microcontroller (NNoM) ([Github Repo](https://github.com/majianjia/nnom)) 
- STMs CMSIS and CMSIS-NN libraries

## Contact
**Philip Wiese** (ETHZ ETIT)  
  *[wiesep@student.ethz.ch](mailto:wiesep@student.ethz.ch)* - [Xeratec](https://github.com/Xeratec) 

-------------------------------------------------------------------------------------------

## Additional information on deploying and evaluate model on MCU

#### ***Using automated toolchain of CubeAI (STM)***
1. Input your Framework dependent, Pre-Trained neural network into STM32CubeMX.AI
2. Automatic and fast generation of an STM32-optimized library

#### ***Using TensorFlow Lite Micro (From Lecture Notes)***
To deploy a TensorFlow model to a microcontroller, you will need to follow this process:
1. Create or obtain a TensorFlow model  
   The model must be small enough to fit on your target device after conversion, and it can only use supported operations. If you want to use operations that are not currently supported, you can provide your own implementations.
2. Convert the model to a TensorFlow Lite FlatBuffer  
   You will convert your model into the standard TensorFlow Lite format using the TensorFlow Lite converter. You may wish to output a quantized model, since these are smaller in size and more efficient to execute. 
3. Convert the FlatBuffer to a C byte array.  
   Models are kept in read-only program memory and provided in the form of a simple C file. Standard tools can be used to convert the FlatBuffer into a C array.
4. Integrate the TensorFlow Lite for Microcontrollers C++ library  
   Write your microcontroller code to collect data, perform inference using the C++ library, and make use of the results.
5. Deploy to your device  
   Build and deploy the program to your device.


#### ***Using NNoM ([Documentation](https://majianjia.github.io/nnom/guide_5_min_to_nnom/))***
1. Create or obtain a TensorFlow model  
   The model must be small enough to fit on your target device after conversion, and it can only use supported operations. If you want to use operations that are not currently supported, you can provide your own implementations.
2. Convert the model to a NNoM model 
   We can now convert it to C To convert the model, NNoM has provided a simple API `generate_model()` API to automatically do the job. Simply pass the model and the test dataset to it. It will do all the magics for you.
3. Integrate the NNoM library  
   When the conversion is finished, you will find a new `weights.h` under your working folder. Simply copy the file to your MCU project, and call `model = nnom_model_create()`; inside your `main()`.
4. Deploy to your device  
   Build and deploy the program to your device.