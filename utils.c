/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:28:45 by fayan             #+#    #+#             */
/*   Updated: 2022/02/26 16:28:49 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_intlen(long long int a, int base)
{
	int	i;

	i = 0;
	if (a < 0)
	{
		a *= -1;
		i++;
	}
	while (a != 0)
	{
		a /= base;
		i++;
	}
	return (i);
}

int	ft_putnbr(int x)
{
	char	*a;
	int		l;

	if (x == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (x == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	l = 0;
	a = ft_itoa(x);
	l = ft_putstr(a);
	free(a);
	return (l);
}
