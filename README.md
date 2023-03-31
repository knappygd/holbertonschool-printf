# printf
## Overview
This repository contains a replica of the original printf function in C, defined in ```stdio.h```, developed by Rocio Pallas and Emilio Damasco.
## Functionality
The printf function allows to print to console one or more parameters passed to the function, of any type.
## Usage of _printf()
Unless the parameter passed is a string, we have to explicitly state which type (format) of parameter we are intending to print.
### Format %d, %i
An example of printf being passed an int (or decimal) would go as follows:
```
_printf("%d", 98); // Decimal
_printf("%i", 98); // Integer
```
or alternatively, using a variable:
```
int n = 98;

_printf("%d", n);
```

### Format %s
In order to print a string, we have two possibilities:
```
_printf("%s", "This is a string.");
```
or without stating any format at all:
```
_printf("This is a string.");
```

### Format %c
If we want to print a single character, we do the following:
```
_printf("%c", 'c');
```
 
The supported formats of the _printf() function (as of the current version) include *i*, *d*, *s* and *c*, being integers, decimals, strings or characters, respectively.
> As a side note, %i and %d have no difference when used in printf, though there is using them in the scanf() function.

## Return value
_printf() returns an *int*, which is the number of characters printed to console.
The function will return -1, however, in the case that the format parameter is passed a ```NULL``` argument, or in the case a '%' is passed in a string followed by a terminating null caracter (```\0```).

## Technical description
This section covers the technical aspects of our function.
### _putchar()
_putchar() is a function used for printing a single character to the console. It takes a single character as an argument and prints it using the write() system call.
### print_s()
print_s() takes a va_list and prints the content of a ```char *``` va_arg using the write() system call by determining the va_arg length. This function equals the input to (null) in case it is passed a NULL value, instead of returning -1.
### print_c()
print_c() takes a va_list and prints the content of va_arg (read as an *int*) and prints the corresponding value from the ASCII table.
### print_d()
print_d() takes a va_list and prints the content of va_arg by reading each digit from the int passed, converting it to a ```char``` and printing it. 
### get_func()
get_func() determines which of the above functions should be used depending on the format passed to the _printf() function. The functions to select are defined in the structure ```format```.
### main.h
All function prototypes as well as the structure can be found in the main.h header file.
