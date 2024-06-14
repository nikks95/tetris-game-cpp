#Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Igame/inc

#Dir
BUILDDIR =  ../build/game
LIBDIR = ../build/libs
TARGET = $(LIBDIR)/libgame.a

#Source and object files
SRCS = $(wildcard src/*.cpp)
OBJS = $(patsubst src/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

LIBS = -lSDL2
#target
all: $(TARGET)

$(info OBJS is $(OBJS))

# Build the static library
$(TARGET) : $(OBJS)
	@mkdir -p $(LIBDIR)
	ar rcs $@ $^

# Compile source files into object files
$(BUILDDIR)/%.o: src/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(LIBS)

#clean up
clean: 
	rm -rf $(BUILDDIR) $(TARGET)

#Phony targets
.PHONY: all clean
