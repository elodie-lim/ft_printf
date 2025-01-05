# ft_printf - Custom C Printf Implementation

**ft_printf** is a custom implementation of the standard `printf` function in C, developed as part of the 42 curriculum. This project explores variadic functions and advanced formatting logic, offering an invaluable opportunity to refine coding and debugging skills. Once complete, **ft_printf** becomes a reusable library for future projects.

This repository contains my implementation of `ft_printf`, built with modular, clean, and extensible code to mimic the behavior of the original `printf`.

---

## Features

The `ft_printf` function handles the following conversions:

- **%c**: Prints a single character.
- **%s**: Prints a string.
- **%p**: Prints a pointer in hexadecimal format.
- **%d**: Prints a signed decimal (base 10) number.
- **%i**: Prints a signed integer in base 10.
- **%u**: Prints an unsigned decimal (base 10) number.
- **%x**: Prints a number in hexadecimal (base 16) lowercase format.
- **%X**: Prints a number in hexadecimal (base 16) uppercase format.
- **%%**: Prints a percent sign.

---

## Project Structure

```
ft_printf/
├── srcs/                # Source files
│   ├── utils.c        
│   ├── number_formatter.c # Handles number formatting (%d, %i, %u, %x, %X)
│   ├── string_formatter.c # Handles string and char formatting (%c, %s)
│   ├── convert.c        # Handles pointer and other conversions (%p)
│   └── ft_printf.c      # Core ft_printf function
├── include/             # Header files
│   └── ft_printf.h 
├── Makefile     
```

---

## Compilation

To compile the **ft_printf** library, use the provided `Makefile`:

```bash
make        # Compile mandatory functions
make clean  # Remove object files
make fclean # Remove object files and the library
make re     # Recompile everything
```

---

Thank you for visiting this repository!
