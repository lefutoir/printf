/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:03 by aulukutu          #+#    #+#             */
/*   Updated: 2023/03/14 14:30:39 by aulukutu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unsigned_int(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 16;
	}
	return (i);
}

static void	ft_putchar_hexa(unsigned long c, char *str)
{
	write (1, &str[c], 1);
}

int	ft_convert_hexa(unsigned long nbr, char *str)
{
	int	len;

	len = 0;
	if (nbr > 15)
		ft_convert_hexa((nbr / 16), str);
	ft_putchar_hexa((nbr % 16), str);
	len += ft_strlen_unsigned_int(nbr);
	return (len);
}

int	ft_convert_long(unsigned long nbr, char *str)
{
	int	len;

	len = 2;
	write (1, "0x", 2);
	len += ft_convert_hexa(nbr, str);
	return (len);
}
