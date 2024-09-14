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
