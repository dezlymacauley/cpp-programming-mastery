# New C++ Project Setup Guide
_______________________________________________________________________________

Create the project directory
```sh
mkdir name-of-project
```

Enter the project directory
```sh
cd name-of-project
```

For the rest of this guide, all commands should be run from this directory.
_______________________________________________________________________________

Create the project structure
```sh
mkdir bin/
mkdir src/
mkdir include/
touch src/main.cpp
touch .clang-format
touch .clangd
touch Makefile
```
_______________________________________________________________________________

### Configure the project
_______________________________________________________________________________

Add this to the `src/main.cpp` file

```cpp
#include <print>

using std::println;

int main() {
    println("C++ Programming Mastery");
    return 0;
}
```
_______________________________________________________________________________

Add this to the `.clang-format` file

```yaml
Language: Cpp
IndentWidth: 4
AccessModifierOffset: -4
ColumnLimit: 80
PointerAlignment: Left
AllowShortFunctionsOnASingleLine: false
```
_______________________________________________________________________________

Add this to the `.clangd` file

```yaml
CompileFlags:
  Add: [-std=c++23, -Iinclude]
```

`-std=C++23` tells the `clangd` language server to interpret the code using 
the C++23 standard.

`-Iinclude` tells the `clangd` language server that the header files of your
project can be found in the directory called `include`.

The two settings above will ensure that you don't get false warnings from
the `clangd` language server.

_______________________________________________________________________________

Add this to the `Makefile`

```make
.SILENT:
.PHONY: run clean

run:
	mkdir -p bin/
	bear -- clang++ -std=c++23 -Iinclude -Wconversion src/*.cpp -o bin/main
	./bin/main

clean:
	rm -rf bin/
```
_______________________________________________________________________________
## How to run your project

Make sure that you are in the root of the project and then run this command:

```sh
make
```

This will generate a `compile_commands.json` file,
a `bin/main` file, and if you open a C++ file in your project,
you'll also have a `.cache` directory in your project.

_______________________________________________________________________________

To run the latest version of your compiled binary:
```
./bin/main
```
_______________________________________________________________________________
