.SILENT:
.PHONY: run clean

run:
	mkdir -p bin/
	clang++ -std=c++23 -Iinclude -Wconversion src/*.cpp -o bin/main
	./bin/main

clean:
	rm -rf bin/
