#!/usr/bin/python3

# Fast convolution of an audio signal with the impulse response of a system modeled as LTI (Linear Time Invariant) one.
# Use: conv.py source.wav impulse_response.wav output.wav

import scipy
from scipy import signal
import soundfile as sf
import sys

def nextpow2( L ):
	N = 2
	while N < L: N = N * 2
	return N
	
def fast_conv_vect( x, h ):
	return signal.fftconvolve(x,h)

source = sys.argv[1]
impulse = sys.argv[2]
conv_output = sys.argv[3]

clip_factor = 1.01 # clip factor default value

h1, Fs1 = sf.read( impulse ) # impulse response
x1, Fs2 = sf.read( source ) # file to process

if Fs1 == Fs2 : # if sample rates are the same
	print("Processing...")
	y1 = fast_conv_vect( x1, h1 ).real # takes the real part to avoid a too small complex part (around e-18)

	# audio normalization: if "y = y/max(y)" -> "values out of [-1,+1] range are clipped"
	y1 = y1/( max(y1)*clip_factor ) # to avoid clipping
	
	sf.write( conv_output, y1, Fs1 )

	print("Output file:", conv_output)
	print("Convolution success.")
else:
	print("Error: files has different sample rate.")
