# _printf README

## Description

_printf is a lightweight, simplified version of the C standard library function `printf`. This implementation provides basic formatting capabilities, allowing users to print strings, characters, and integers to the standard output. Designed for educational purposes or simple embedded systems, _printf demonstrates how variadic functions in C can be utilized to implement custom formatted output.

## Features

- Prints strings and characters to stdout.
- Supports basic format specifiers: `%c` for characters, `%s` for strings, `%d`, `%%` for '%' character and `%i` for integers.
- Easy to integrate and use in any C project.
- Demonstrates the use of variadic functions and parsing format specifiers.

## Getting Started

### Prerequisites

To use _printf, you need:

- A C compiler (e.g., GCC, Clang)
- Basic understanding of C programming and compilation process

### Installation

1. **Download _printf**: Clone or download the _printf source code from the repository.
   
   ```
   https://github.com/Louttre/holbertonschool-printf.git
   ```

2. **Include _printf in Your Project**: Add `_printf.c` and `main.h` and all the files to your project's source directory.

3. **Compile Your Project**: Include the _printf header in your source files where you need printing capabilities.

   ```c
   #include "main.h"
   ```

   Compile your project along with _printf. For example, if using GCC:

   ```
   gcc myprogram.c _char.c _int.c _string.c itoa.c _printf.c -o myprogram 
   ```

### Usage

To print formatted text to stdout, use the `_printf` function similar to how you would use the standard `printf`:

```c
_printf("Hello, World!\n");
_printf("This is a character: %c\n", 'A');
_printf("This is a string: %s\n", "Hello, World");
_printf("Here's an integer: %d\n", 100);
_printf("Here's a percentage : %%\n");
```

## Contributing

Contributions to _pPrintf are welcome! If you have improvements or bug fixes:

1. Fork the repository.
2. Create a new branch for your changes.
3. Implement your changes.
4. Submit a pull request.

## License

_printf is open-source software.

## Credits

_printf was created by RUEDA Johan and SAFOU Evrade.

## Support

If you have any questions or encounter issues, please open an issue on the project's GitHub page.

---
