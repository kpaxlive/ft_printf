/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:16:59 by fayan             #+#    #+#             */
/*   Updated: 2022/02/26 16:17:10 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen(char *a);
char	*ft_itoastrfill(int i, int x, int k);
int		ft_intlen(long long int a, int base);
char	*ft_itoa(int x);
char	*ft_uitoa(unsigned long long x);
int		ft_putnbr(int x);
int		pconverthex(unsigned long int b);
int		xconverthex(unsigned int a, char *base);
int		basamakp(unsigned long int a);
int		pformat(unsigned long int a);
int		uformat(unsigned int a);
int		xformat(unsigned int a, char c);
int		controller(va_list list, const char *str, int i, int sonuc);
int		ft_printf(const char *str, ...);
#endif
