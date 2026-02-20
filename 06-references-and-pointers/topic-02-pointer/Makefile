.SILENT:
.PHONY: run clean

# Compile Settings
COMPILER = clang++
FLAGS = -std=c++23 -Iinclude -Wconversion -Wunused-variable 
# -fsanitize=null

# Build Settings
INPUT = src/*.cpp 
OUTPUT = bin/main

run:
	mkdir -p bin/
	bear -- $(COMPILER) $(FLAGS) $(INPUT) -o $(OUTPUT)
	./bin/main

clean:
	rm -rf bin/
