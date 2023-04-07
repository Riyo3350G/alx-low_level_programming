# 0x08. C - Recursion
## Overview
In this project, we will learn about recursion and how to use it in C programming.

## Requirements
* Allowed editors: vi, vim, emacs
* All files compiled on Ubuntu 14.04 LTS
* The only C standard library functions allowed are malloc, free, and exit.
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall, -Werror, -Wextra, and -pedantic.
## Files
|File|Description|
|-----|---------|
|0-puts_recursion.c|	Function that prints a string, followed by a new line, using recursion|
|1-print_rev_recursion.c|	Function that prints a string in reverse, followed by a new line, using recursion|
|2-strlen_recursion.c|	Function that returns the length of a string, using recursion|
|3-factorial.c|	Function that returns the factorial of a given number, using recursion|
|4-pow_recursion.c|	Function that returns the value of x raised to the power of y, using recursion|
|5-sqrt_recursion.c|	Function that returns the natural square root of a number, using recursion|
|6-is_prime_number.c|	Function that checks if a number is a prime number, using recursion|
|100-is_palindrome.c|	Function that checks if a string is a palindrome, using recursion|
|101-wildcmp.c|	Function that compares two strings and returns 1 if the strings can be considered identical, otherwise returns 0. This function can compare strings containing the special character *, which can replace any string.|
## Compilation and Execution
All files will be compiled using the following command:

```shell
$ gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <outputfile>
```
where <filename.c> is the name of the C file and <outputfile> is the desired name of the executable output file.

Each function can be tested by writing a main function that calls the function with test cases.

## Example Usage
```c
#include "holberton.h"
#include <stdio.h>

int main(void)
{
    char *s = "Holberton";
    int n;

    n = _strlen_recursion(s);
    printf("%d\n", n);
    return (0);
}
```
Output:

```
9
```
## Author
By Redwan Ben Yechou 

