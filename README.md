# ft_printf

A custom implementation of the C standard library `printf` function, built as a 42 school project.
The library reproduces formatted output conversion and writes to standard output, packaged as a static archive (`libftprintf.a`).

## Supported Conversions

| Specifier | Description |
|-----------|-------------|
| `%c` | Single character |
| `%s` | String |
| `%p` | Pointer address |
| `%d` / `%i` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%%` | Literal percent sign |

## Technologies

- **Language:** C
- **Compiler:** cc (with `-Wall -Wextra -Werror`)
- **Build system:** Make

## Build Instructions

```sh
make        # Build libftprintf.a
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Rebuild from scratch
```

## Usage

Include the header and link the static library when compiling your program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, you are number %d\n", "world", 42);
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Hex: %x | Upper: %X\n", 255, 255);
    return (0);
}
```

```sh
cc main.c -L. -lftprintf -I include -o my_program
```

## Key Technical Concepts

- **Variadic functions:** Uses `<stdarg.h>` (`va_list`, `va_arg`, `va_start`, `va_end`) to handle a variable number of arguments.
- **Base conversion:** Integers are converted to their string representation (decimal and hexadecimal) using custom `ft_itoa`, `ft_utoa`, and `ft_utoa_base` functions.
- **Static library:** Compiled into an `ar` archive for easy reuse across projects.
