/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoas.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:30:10 by fayan             #+#    #+#             */
/*   Updated: 2022/02/26 15:30:29 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoastrfill(int i, int x, int k)
{
	char	*s;

	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	i--;
	while (i >= 0)
	{
		s[i] = (x % 10) + 48;
		x = x / 10;
		i--;
	}
	if (k == 1)
		s[0] = '-';
	return (s);
}

char	*ft_uitoastrfill(int i, unsigned long long x, int k)
{
	char	*s;

	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	i--;
	while (i >= 0)
	{
		s[i] = (x % 10) + 48;
		x = x / 10;
		i--;
	}
	if (k == 1)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int x)
{
	char	*str;
	int		i;
	int		k;
	int		j;

	j = x;
	k = 0;
	i = 0;
	if (x < 0)
	{
		x *= -1;
		i++;
		k++;
	}
	while (j != 0)
	{
		j /= 10;
		i++;
	}
	str = ft_itoastrfill(i, x, k);
	return (str);
}

char	*ft_uitoa(unsigned long long x)
{
	char				*str;
	int					i;
	int					k;
	unsigned long long	j;

	j = x;
	k = 0;
	i = 0;
	if (x < 0)
	{
		x *= -1;
		i++;
		k++;
	}
	while (j != 0)
	{
		j /= 10;
		i++;
	}
	str = ft_uitoastrfill(i, x, k);
	return (str);
}
