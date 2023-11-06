/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:58:12 by skanna            #+#    #+#             */
/*   Updated: 2023/11/06 18:38:42 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
 

int	ft_printf(const char *, ...);
int	ft_strlen(const char *str);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putsigned(int n, const char c);
int	ft_putunsigned(unsigned int n, const char c);
int	ft_print_p1(unsigned long long n);
int	ft_print_p2(unsigned long long n);

#endif