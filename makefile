# Variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Executables and Directories
BUILDDIR = ./tetris/build/main
LIBDIR = ./tetris/build/libs
TARGET = ./play/Tetris

# Source files
SRCS = $(wildcard ./*.cpp)

# Object files
OBJS = $(patsubst ./%.cpp,$(BUILDDIR)/%.o,$(SRCS))

# Libraries
LIBS = -L$(LIBDIR) -lgame -lmodels -llib

INCDIR = ./tetris/game/inc

# Default target
all: libs $(TARGET)

# Build libraries
libs:
	$(MAKE) -C tetris

# Link the target executable
$(TARGET): $(OBJS) | $(LIBDIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LIBS)

# Compile source files into object files
$(BUILDDIR)/%.o: ./%.cpp | $(BUILDDIR)
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

# Create build directory
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Clean up build files
clean:
	$(MAKE) -C tetris clean
	rm -rf $(BUILDDIR) $(TARGET) $(LIBDIR)

# Phony targets
.PHONY: all clean libs
