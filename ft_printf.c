/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fayan <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:18:51 by fayan             #+#    #+#             */
/*   Updated: 2022/02/26 16:39:03 by fayan            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	controller(va_list list, const char *str, int i, int sonuc)
{
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd' || str[i] == 'i')
				sonuc += ft_putnbr(va_arg(list, int));
			if (str[i] == 'u')
				sonuc += uformat(va_arg(list, unsigned int));
			if (str[i] == 'X' || str[i] == 'x')
				sonuc += xformat(va_arg(list, unsigned int), str[i]);
			if (str[i] == 's')
				sonuc += ft_putstr(va_arg(list, char *));
			if (str[i] == 'c')
				sonuc += ft_putchar(va_arg(list, int));
			if (str[i] == 'p')
				sonuc += pformat(va_arg(list, unsigned long int));
			if (str[i] == '%')
				sonuc += ft_putchar('%');
		}
		else
			sonuc += ft_putchar(str[i]);
		i++;
	}
	return (sonuc);
}

int	ft_printf(const char *str, ...)
{
	int		a;
	int		i;
	int		sonuc;
	va_list	list;

	i = 0;
	sonuc = 0;
	va_start(list, str);
	a = controller(list, str, i, sonuc);
	va_end(list);
	return (a);
}
