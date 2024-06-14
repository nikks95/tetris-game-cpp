#Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Imodels/inc

#Dir
BUILDDIR =  ../build/models
LIBDIR = ../build/libs
TARGET = $(LIBDIR)/libmodels.a

#Source and object files
SRCS = $(wildcard src/*.cpp)
OBJS = $(patsubst src/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

#target
all: $(TARGET)

# Build the static library
$(TARGET) : $(OBJS)
	@mkdir -p $(LIBDIR)
	ar rcs $@ $<

# Compile source files into object files
$(BUILDDIR)/%.o: src/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

#clean up
clean: 
	rm -rf $(BUILDDIR) $(TARGET)

#Phony targets
.PHONY: all clean
