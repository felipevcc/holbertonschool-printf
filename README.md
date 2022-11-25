<div align="center">
    <h1>Printf Project</h1>
    <img src="https://img.shields.io/github/repo-size/felipevcc/holbertonschool-printf?color=E97A6B&labelColor=1a1e29&style=for-the-badge">
</div>

## Description

This project is a simulation of the printf function in C with its most important features, it was made in the software development program of [Holberton School](https://www.holbertonschool.com/).

## Man page

The man page is a file wich explains in detail how the function works. If you want see a full explanation of this function you can run our man page this way:
```
$ man ./man_3_printf
```

## Flowchart

<img src="https://i.imgur.com/1J0VoyT.jpg" alt="flowchart">

## Usage

<details open>
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

<details open>
<summary> <strong> Compilation </strong> </summary>

<br>

To compile the program this command has to be executed:
```
$ make -f makefile
```
This will create a compilation file, its name is `main.out`. You can run this file in your terminal with the next command:
```
$ ./main.out
```
</details>

<details open>
<summary> <strong> Parameters </strong> </summary>

<br>

The next chart explains the detailed functionality of the parameters that the function accepts, respectively with each data type.

| Indicator  | Data type | Description |
| ------------- |:-------------:|:-------------:|
| %d      | int    | Print an int as a signed decimal number  |
| %i      | int    | Print an int as a signed decimal number  |
| %u      | int    | Print an unsigned as an unsigned decimal number  |
| %o      | int    | Print an unsigned as an unsigned octal number  |
| %x      | int    | Hexadecimal notation (using lowercase letters a-f)  |
| %X      | int    | Hexadecimal notation (using uppercase letters A-F)  |
| %c      | int    | Convert an int to an unsigned character and print the resulting character  |
| %s      | char * | Print a string pointed to by a char *  |
| %p      | void * | Print a void * argument in hexadecimal (ANSI C only)  |
| %%      | char   | Print a single % character  |
| %b      | int    | Print a converted number to binary (base 2)  |
| %r      | char * | Print a reversed string  |
| %R      | char * | Converts a string to rot13 and prints it  |

Here's an example of how does the parameters work in our `_printf()` function:
``` 
#include "main.h"

int main()
{
    _printf("Cohort: %i", 19);
    return (0);
}
```
The output of this main function will be:
```
$ ./main.out
Cohort: 19
```

</details>

## Authors

* Juan Esteban Duque <a href="https://github.com/Juanesduque1" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* Andres Rodriguez <a href="https://github.com/Andres98100" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
* Felipe Villamizar <a href="https://github.com/felipevcc" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
