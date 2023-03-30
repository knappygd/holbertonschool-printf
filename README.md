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
