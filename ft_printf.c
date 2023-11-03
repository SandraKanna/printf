/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:56:32 by skanna            #+#    #+#             */
/*   Updated: 2023/11/03 19:18:16 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"




int	ft_printf(const char *ptr, ...)
{
	size_t	len;
	va_list		arg;

	va_start(arg, ptr);
	if (ptr)


	va_end(arg);
	
	return (len);
}

// cspdiuxX%


#include <stdio.h>

int main(void)
{
	int		d = 50;
	int		dd = -905;	
	char	c = 'c';
	char	*s = "abc";

//flags for bonus: 0, # and +
	printf("pos without flag: %d\n", d);
	printf("flag +d of pos: %+d\n", d);
	printf("flag +d of neg: %+d\n", dd);
	printf("\n");
	printf("char: %c\n", c);
	printf("char in octal | flag #o: %#o\n", c);
	printf("char in hex | flag #x: %#x\n", c);
	printf("\n");
	printf("s no flag: %s\n", s);
	printf("flag 10s: %10s\n", s);
	printf("flag 20s: %20s\n", s);
	printf("flag -10s: %-10s\n", s);
	printf("flag -20s: %-20s\n", s);

}