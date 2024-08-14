# Makefile

# Compiler and flags
CXX = clang++
CXXFLAGS = -Wall -Wextra -Wpedantic

# Target executable
TARGET = hello
SRC = hello.cpp

# Default rule
all: $(TARGET)
	@./$(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Rule to clean up build artifacts
clean:
	@rm -f $(TARGET)

# Phony targets
.PHONY: all clean
