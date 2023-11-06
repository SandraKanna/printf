/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:30:32 by skanna            #+#    #+#             */
/*   Updated: 2023/11/06 18:44:37 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static char	*def_base(const char c)
{
	char	*base;

	if (c == 'd' || c == 'i' || c == 'u')
		base = "0123456789";
	else if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	return (base);
}

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_putsigned(int n, const char c)
{
	long int	nbr;
	char		*base;
	int			len_base;
	int			len;

	nbr = n;
	base = def_base(c);
	len_base = ft_strlen(base);
	len = 0;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= len_base)
		len += ft_putsigned(nbr / len_base, c);
	len += ft_putchar(base[nbr % len_base]);
	return (len);
}

int	ft_putunsigned(unsigned int n, const char c)
{
	char	*base;
	int		len_base;
	int		len;

	base = def_base(c);
	len_base = ft_strlen(base);
	len = 0;
	if (n >= (unsigned int)len_base)
		len += ft_putunsigned(n / (unsigned int)len_base, c);
	len += (ft_putchar(base[n % (unsigned int)len_base]));
	return (len);
}

int	ft_print_p1(unsigned long long n)
{
	char	*beg;
	int		len;
	
	len = 0;
	beg = "0x";
	len += ft_putstr(beg);
	len += ft_print_p2(n);
	return (len);
}

int	ft_print_p2(unsigned long long n)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_print_p2(n / 16);
	len += (ft_putchar(base[n % 16]));
	return (len);
}
