/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:56:32 by skanna            #+#    #+#             */
/*   Updated: 2023/11/06 18:39:27 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	print_type(va_list arg, char specifier)
{
	int	len;

	len = 0;
	if (specifier == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (specifier == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (specifier == 'u')
	 	len += ft_putunsigned(va_arg(arg, unsigned int), specifier);
	else if (specifier == 'd' || specifier == 'i')
	 	len += ft_putsigned(va_arg(arg, int), specifier);
	else if (specifier == 'x' || specifier == 'X')
	 	len += ft_putunsigned(va_arg(arg, unsigned int), specifier);
	else if (specifier == 'p')
		len += ft_print_p1(va_arg(arg, unsigned long long));
	//bonus: if (c == '#' || c == '+' || c == '0')
		//len += ft_print_bonus(va_arg(arg, int?));
	else
		len += write(1, &specifier, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg;

	len = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	while(format[i])
	{
		if (format[i] == '%') //&& format[i + 1] != '\0')
		{
			len += print_type(arg, format[++i]);
			i++;
		}
		else
		{	
			len += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (len);
}

//conversions to take into account: c d s p i u x X %
//By default the width of a field will be the minimum required to hold the data

//c: the int argument is converted to an unsigned char, and the resulting character is written
//d interpretd the argument as a signed decimal integer including neg and pos.
// i: more flexible than %d. it can convert to different int bases using prefixes like 0x for hexadecimal
// u, x, X: The unsigned int argument is converted to unsigned decimal (u) or hex (x, X)
//s: the const char * argument is expected to be a pointer to an array of character type (pointer to a string).  
	//Characters from the array are written up to (but not including) a '\0'
//p: The void * pointer argument is printed in hexadecimal (as if by %#x or %#lx).
//%: A '%' is written.  No argument is converted

//# For c, d, i, n, p, s, and u conversions, this option has no effect
//# For x and X conversions, a non-zero result has the string ‘0x’ (or ‘0X’ for X conversions) prepended to it
//+ A sign must always be placed before a number produced by a signed conversion. it overrides the 0/space
//0 Zero padding. To be used with digits.  For all conversions except n, the converted value is padded on the
	// left with zeros rather than blanks.  If a precision is given with a numeric
	// conversion (d, i, o, u, i, x, and X), the 0 flag is ignored.

