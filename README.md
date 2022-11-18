<div align="center">
    <h1>Printf Project</h1>
    <img src="https://img.shields.io/github/repo-size/felipevcc/holbertonschool-printf?color=6E93CC&labelColor=1a1e29&style=for-the-badge">
</div>

## Description

This project is a simulation of the printf function in C with its most important features, it was made in the software development program of [Holberton School](https://www.holbertonschool.com/).

## Man page

The man page is a file wich explains in detail how the function works. If you want see a full explanation of this function you can run our man page this way:
```
man ./man_3_printf
```

## Flowchart

img...

## Usage

<details close>
<summary> <strong> Syntaxis </strong> </summary>

<br>

To call the `_printf()` function the next code is required:
```
#include "main.h"

int main() 
{
    _printf("string to print");
    return (0);
}
```
</details>

<details close>
<summary> <strong> Compilation </strong> </summary>

<br>

To compile the program this command has to be executed:
```
make -f makefile
```
This will create a compilation file, its name is `main.out`. You can run this file in your terminal with the next command:
```
./main.out
```
</details>

<details close>
<summary> <strong> Parameters </strong> </summary>

<br>

| Indicator  | Data type | Description |
| ------------- |:-------------:|:-------------:|
| %d      | int    | Print an int as a signed decimal number  |
| %i      | int    | Print an int as a signed decimal number  |
| %u      | int    | Print an unsigned as an unsigned decimal number  |
| %o      | int    | Print an unsigned as an unsigned octal number  |
| %x      | int    | Hexadecimal notation (using lowercase letters a-f)  |
| %X      | int    | Hexadecimal notation (using uppercase letters A-F)  |
| %c      | int    | Convert an int to an unsigned character and print the resulting character  |
| %s      | char * | Print the string pointed to by a char *  |
| %p      | void * | Print a void * argument in hexadecimal (ANSI C only)  |
| %%      | char   | Print a single % character  |
| %r      | char   | Prints the same string "%r"  |
</details>

## Authors

* Juan Esteban Duque <a href="https://github.com/Juanesduque1" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* Andres Rodriguez <a href="https://github.com/Andres98100" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* Felipe Villamizar <a href="https://github.com/felipevcc" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
