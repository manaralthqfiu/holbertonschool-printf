#holbertonschool-printf
#ProjecDescription

This repository contains a custom implementation of the C standard library function `printf`.  
The goal of this project is to understand how formatted output works at a low level, including how format specifiers are parsed and how variadic arguments are handled.  
It was developed as part of the Holberton School low-level programming curriculum.

#Repository Structure

**GitHub Repository**: 'holbertonschool-printf'
This repository includes all source files, headers, and documentation needed to build and test the `_printf` function.

# Project Objectives
- Implement a simplified version of `printf` that handles basic format specifiers.
- Practice using variadic functions (`va_list`, `va_start`, `va_arg`, `va_end`).
- Learn how to parse format strings and print different data types.
- Build reusable helper functions for string and number output.
- Write a manual page (`man_3_printf`) to document the function.

#Requirements
- Function prototype: `int _printf(const char *format, ...);`
- Output must be written to `stdout`.
- Return the number of characters printed (excluding the null byte).
- Handle the following format specifiers:
  - `%c`-> character
  - `%s`-> string
  - `%%`-> percent sign
  - `%d`, `%i` -> signed integers
- No need to handle:
  - Flags (`+`, `-`, `0`, etc.)
  - Field width
  - Precision
  - Length modifiers (`l`, `h`, etc.)
  - Buffering
#File Descriptions

| File Name         | Description |
|------------------ |-------------|
| `main.h`          | Header file containing function prototypes and necessary includes. |
| `_printf.c`       | Main function that parses the format string and dispatches to the correct printing function. |
| `_putchar.c`      | Writes a single character to `stdout` using the `write` system call. |
| `print_string.c`  | Prints a string character by character using `_putchar`. Handles `NULL` strings by printing `(null)`. |
| `print_number.c`  | Recursively prints signed integers digit by digit. Handles negative numbers. |
| `man_3_printf`    | Manual page describing the usage, behavior, and supported specifiers of `_printf`. |
| `README.md`       | Project documentation and overview. |

#Authors
This project was developed collaboratively by:
Manar:Core implementation, documentation, testing, and validation
Fahad: Core implementation, debugging, and performance optimization
Holberton School Low-Level Programming Track
