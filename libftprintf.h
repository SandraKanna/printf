/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skanna <skanna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:58:12 by skanna            #+#    #+#             */
/*   Updated: 2023/11/03 19:18:17 by skanna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
 

int	ft_printf(const char *, ...);
int	ft_isprint(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int d);
int	ft_isalnum(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif