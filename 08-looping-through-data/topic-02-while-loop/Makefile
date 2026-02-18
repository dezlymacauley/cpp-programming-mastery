.SILENT:
.PHONY: run clean

run:
	mkdir -p bin/
	bear -- clang++ -std=c++23 -Iinclude -Wconversion -Wunused-variable src/*.cpp -o bin/main
	./bin/main

clean:
	rm -rf bin/
