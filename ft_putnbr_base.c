/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:30:32 by skanna            #+#    #+#             */
/*   Updated: 2023/10/26 21:12:09 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static const char	*def_base(const char c)
{
	const char	*base;

	if (c == 'd' || c == 'i' || c == 'u')
		*base = "0123456789";
	else if (c == 'p' || c == 'x')
		*base = "0123456789abcdef";
	else (c == 'X')
		*base = "0123456789ABCDEF";
	return (base);
}

static int	ft_strlen(const char *str)
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
	const char	*base;
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
		ft_putnbr(nbr / len_base, c);
	len += ft_putchar(base[nbr % len_base]);
	return (len);
}

int	ft_putunsigned(unsigned int n, const char c)
{
	const char	*base;
	int			len_base;
	int			len;

	base = def_base(c);
	len_base = ft_strlen(base);
	len = 0;
	if ((int)n >= len_base)
		ft_putunsigned(n / (unsigned int)len_base, c);
	len += (ft_putchar(base[(int)n % len_base]));
	return (len);
}

