

SHELL = /bin/sh

.SUFFIXES:
.SUFFIXES: .cc .o

SRCDIR = .

SRCS = \
GpsSensorMessage.cc \
Logger.cc \
main.cc \
Motor.cc \
ParafoilControlMain.cc
		
OBJS = $(SRCS:.cc=.o)

TARGET = zdemo.bin

CXX = g++
#DEBUG = -g -rdynamic -O0 -Werror -DLOCAL_LINUX_DEBUG
DEBUG = -g -O0 -Werror -DLOCAL_LINUX_DEBUG
CXXFLAGS = -Wall -fPIC -std=c++11 $(DEBUG)
INCLUDES = -I./
LIBS = 

all: ${TARGET}

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LIBS) -o $(TARGET)

.cc.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(SRCDIR)/*.o $(TARGET)



