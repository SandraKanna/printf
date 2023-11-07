/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:24:28 by skanna            #+#    #+#             */
/*   Updated: 2023/11/07 13:28:28 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(long n)
{
	char	*base;
	int		len;

	base = "0123456789";
	len = 0;
	if (n >= 10)
		len += ft_print_bonus(n / 10);
	len += ft_putchar(base[n % 10]);
	return (len);
}

int	ft_print_bonus(int n)
{
	long int	nbr;
	int			len;

	nbr = n;	
	len = 0;
	if (nbr < 0)
	{
		len += ft_putchar('-');
		nbr = nbr * -1;
	}
	else
		len += ft_putchar('+');
	len += ft_putnbr(nbr);
	return (len);
}