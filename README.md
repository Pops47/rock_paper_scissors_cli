# A simple Rock-Paper-Scissors game made with C++

First project in "C++Learning" category, using C++ course from Dyma

- Made by Pops -

## To run the game

Clone the repository

#### Make sure you have a C++ compiler installed on your machine

```bash
  g++ --version
```

If you get an error, you have to install it :

- on linux :

```bash
  sudo apt-get install build-essential
```

- on windows :

Download the MSYS2 tool :
https://www.msys2.org

You will see a prompt, enter this command :

```bash
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

then press 'Enter' and 'Y'.

#### Compile the program :

```bash
  g++ -std=c++11 src/main.cpp -o game
```

#### Run the program :

```bash
  ./game
```

#### You can also use Cmake to compile and run the program :

To install CMake :

- on Linux

```bash
sudo apt-get install cmake
```

- on Windows or MacOs

Download it from https://cmake.org/download/ , and follow the set-up instructions

To check :

```bash
cmake --version
```

Then use Cmake and CMake Tools extensions in VSCode to run the program with one click
