/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:03:27 by fayan             #+#    #+#             */
/*   Updated: 2022/02/26 16:03:51 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	xformat(unsigned int a, char c)
{
	char	*base;
	int		i;

	i = 0;
	if (a == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = xconverthex(a, base);
	return (i);
}

int	pformat(unsigned long int a)
{
	int	i;

	i = 0;
	if (a == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	else
	{
		i += write(1, "0x", 2);
		i += pconverthex(a);
	}
	return (i);
}

int	uformat(unsigned int a)
{
	char			*s;
	int				i;
	long long int	b;

	i = 0;
	b = a;
	if (b < 0)
	{
		b *= -1;
		i += write(1, "-", 1);
	}
	if (b == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		s = ft_uitoa(b);
		i += ft_putstr(s);
	}
	free (s);
	return (i);
}
