

SHELL = /bin/sh

.SUFFIXES:
.SUFFIXES: .cc .o

SRCDIR = .

SRCS = ./main.cc \
		./logger.cc
		
OBJS = $(SRCS:.cc=.o)

TARGET = zdemo.bin

CXX = g++
DEBUG = -g -rdynamic -O0 -Werror
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



