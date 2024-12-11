# Compiler and flags
CXX = g++
LDFLAGS = -L/opt/homebrew/Cellar/gsl/2.8/lib -lgsl -lgslcblas -I/opt/homebrew/Cellar/gsl/2.8/include/

# Source and target
SRC = ising.cpp
TARGET = ising.o
GRAPH = graph.py

# Default target
all: $(TARGET)

# Compile the program
$(TARGET): $(SRC)
	$(CXX) $(SRC) -o $(TARGET) $(LDFLAGS)

# Run the program and python script
run: $(TARGET)
	./$(TARGET)
	python3 $(GRAPH)

# Clean up
clean:
	rm -f $(TARGET)
