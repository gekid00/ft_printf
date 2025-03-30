# ft_printf 🖨️✨
Overview
The ft_printf project at 42 is about recreating the printf function from the C standard library (stdio.h). The goal is to implement a custom version capable of formatting and displaying text with different data types.

# Key Features 🛠️
- Supports the main format specifiers:

  - %c → Character

  - %s → String

  - %d / %i → Signed integer

  - %u → Unsigned integer

  - %x / %X → Hexadecimal (lowercase/uppercase)

  - %p → Memory pointer

  - %% → Prints the % character

- Uses write() instead of printf().

- Handles dynamic formatting and arguments with va_list.

# Challenges & Learning 🧠👨‍💻
- Memory management: Converting and displaying various data types.

- Variadic functions: Using va_start, va_arg, va_end to handle a variable number of arguments.

- Optimization: Avoiding memory leaks and improving output performance.

# Why This Project? 💡
An essential exercise to understand the inner workings of printf, improve variadic function handling, and strengthen C programming and string manipulation skills!
