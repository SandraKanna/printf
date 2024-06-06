# FT_PRINTF 42
The goal of this project from 42 School is to understand what a variadic function is so you can be able to reproduce some of the capabilities of the "printf" function from the standard C library.  
A variadic function is a function that can take variable types of arguments. Printf is a good example as it can take integers, chars, strings, pointer, etc as parameters and print the corresponding output.  

## Mandatory part
Implement the following conversions:
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

To do so, I have integrated my [libft]([url](https://github.com/SandraKanna/libft)) to this project so i don't have to code again ft_putchar and ft_putstr for the %c and %s specifiers.  
I tweaked a little bit the ft_putnbr function to create:
- **ft_putunsigned**: for the %u, %x and %X specifiers.
- **ft_putsigned**: for the %i and %d specifiers.
- **ft_print_p1**: for the %p specifier.
