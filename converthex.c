/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converthex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:09:49 by fayan             #+#    #+#             */
/*   Updated: 2022/02/26 15:10:02 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	xconverthex(unsigned int a, char *base)
{
	int				i;
	int				k;
	char			*str;
	long long int	b;

	b = a;
	k = ft_intlen(b, 16);
	i = k;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	i--;
	while (b > 0)
	{
		str[i] = base[b % 16];
		b = b / 16;
		i--;
	}
	ft_putstr(str);
	free(str);
	return (k);
}

int	basamakp(unsigned long int a)
{
	int	i;

	i = 0;
	while (a != 0)
	{
		a = a / 16;
		i++;
	}
	return (i);
}

int	pconverthex(unsigned long int b)
{
	int		i;
	char	*str;
	char	*base;
	int		k;

	base = "0123456789abcdef";
	k = basamakp(b);
	i = basamakp(b);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	i--;
	while (b > 0)
	{
		str[i] = base[b % 16];
		b = b / 16;
		i--;
	}
	ft_putstr(str);
	free(str);
	return (k);
}
