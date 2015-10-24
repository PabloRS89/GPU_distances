# Locations of libraries
CUDA      = /usr/local/cuda-6.5
GL_LIB    = /usr/local/lib64
GL_INC    = /usr/include/

# Compilers
CXX       = gcc
CXXFLAGS  = -O2 -fPIC -malign-double
NVCC      = nvcc
NVCCFLAGS = -I$(GL_INC) --compiler-options "-O2 -fPIC" --compiler-bindir=/usr/bin/gcc-4.8

# Linker flags
LDFLAGS   = -L$(CUDA)/lib64 -L. -L${GL_LIB}
LIBS      = -lcuda -lcudart -lGL

NBODYCODE = potential_nbody_gpu.cu

libnbodygpu.so:	Makefile potential_nbody_gpu.h $(NBODYCODE)
	$(NVCC) --shared $(NBODYCODE) -o potential_nbody_gpu.so $(NVCCFLAGS) $(LDFLAGS) $(LIBS)


clean:
	\rm -f *.o *.so
