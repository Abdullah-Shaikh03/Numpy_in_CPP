# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Directories
SRC_DIR = src
INCLUDE_DIR = include
EXAMPLES_DIR = examples
BUILD_DIR = build

# Source and Object Files
SRCS = $(SRC_DIR)/numcpp.cpp
OBJS = $(BUILD_DIR)/numcpp.o
EXAMPLE = $(EXAMPLES_DIR)/example_numcpp.cpp
EXECUTABLE = example

# Default target
all: $(EXECUTABLE)

# Compile library object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Build the example executable
$(EXECUTABLE): $(OBJS) $(EXAMPLE)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $(OBJS) $(EXAMPLE) -o $(EXECUTABLE)

# Create build directory if it doesn't exist
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Run the program
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Clean the build
clean:
	rm -rf $(BUILD_DIR) $(EXECUTABLE)
