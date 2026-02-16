# C++ Programming Mastery Setup Guide
_______________________________________________________________________________

## Install `clangd` and `bear`

On Arch Linux `clangd` is bundled with the `clang` package
```sh
sudo pacman -S --needed clang
```

clangd is a language server for C++ code.
_______________________________________________________________________________

```sh
sudo pacman -S --needed bear
```

bear is a rust-powered command that you add to the Makefile of your
C++ project. It will create a `compile_commands.json` file that will allow
clangd provide path completion when refering to header file.

E.g. Example of usage in the Makefile of your project
```make
run:
    mkdir -p bin/
 	bear -- clang++ -std=c++23 -Iinclude -Wconversion src/*.cpp -o bin/main
 	./bin/main
```

Without bear, if you had a header file in `include/Car.h` of your project,
and then you have the file `src/Car.cpp` and you tried to reference the
header file like this:

```cpp
#include "Car.h"`
```
clangd would display an error message like this in Neovim:
```
'Car.h' file not found clang (pp_file_not_found) [1, 10]
```
_______________________________________________________________________________

## Create the project directory

Create the project directory with this command
```sh
mkdir cpp-programming-mastery
```

Enter the project directory
```sh
cd cpp-programming-mastery
```

For the rest of this guide, all commands should be run from this directory.
_______________________________________________________________________________

## Install `clang` (A compiler for C++) using the `conda` backend with `mise`

Use this command to check which versions of C++ are available  
```sh
mise ls-remote conda:clang
```

Use this command if you simply want to get the latest version of C++ you can
run this command:
```sh
mise latest conda:clang
```

To install and set the specific version of clang that will 
be used in the directory, run this command:
```sh
MISE_EXPERIMENTAL=1 mise use conda:clang@21.1.8
```

The `MISE_EXPERIMENTAL=1` flag is required to specifiy that that you 
want to use the `conda` backend to install a pre-compiled `clang` binary.

This should take less than 3 minutes.

Do not leave out `MISE_EXPERIMENTAL=1` or `conda:` or mise will try 
to build `clang` from source which will take over an hour and will freeze
or crash your system (not because of mise, but simply because clang 
is a massive project to build from source).
_______________________________________________________________________________

## Install the `clang-format` code formater

Same steps as installing `clang`

```sh
mise ls-remote conda:clang-format
```

```sh
mise latest conda:clang-format
```

```sh
MISE_EXPERIMENTAL=1  mise use conda:clang-format@21.1.8
```
_______________________________________________________________________________

## Install `make` so that you can use `Makefiles` to build your project

```sh
mise ls-remote conda:make
```

```sh
mise latest conda:make
```

```sh
MISE_EXPERIMENTAL=1  mise use conda:make@4.4.1
```
_______________________________________________________________________________

## Install `cmake` for building more complex C++ projects

```sh
mise ls-remote cmake
```

```sh
mise latest cmake
```

```sh
mise use cmake@4.2.3
```
_______________________________________________________________________________

## Install `connan`, a package manager for C++ projects

```sh
mise ls-remote conan
```

```sh
mise latest conan
```

```sh
mise use conan@2.25.2
```
_______________________________________________________________________________

You should have a `mise.toml` file that looks like this:

```toml
[tools]
cmake = "4.2.3"
conan = "2.25.2"
"conda:clang" = "21.1.8"
"conda:clang-format" = "21.1.8"
"conda:make" = "4.4.1"
```
_______________________________________________________________________________

### Add a `gitignore` file

```sh
touch .gitignore
```

Add this to the file:
```gitignore
# Build outputs
**/bin/

# clangd (language server) cache
**/.cache/
```
_______________________________________________________________________________
