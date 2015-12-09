import os, sys

outputfile = 'sdfont'

env = Environment()
env.Append(CCFLAGS = ['-g3'])
env.Append(LIBS = ['freetype'])
env.Append(CPPPATH = ['/usr/local/include/freetype2'])
env.Append(LIBPATH = ['/usr/local/lib'])

list = Split("""main.cpp
	stb_image.c
	BinPacker.cpp
	lodepng.cpp
	EncodingHelper.cpp
	""")

list.sort(lambda x, y: cmp(x.lower(),y.lower()))

outputprogram = env.Program(outputfile, list)

