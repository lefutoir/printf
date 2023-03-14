/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:47:22 by aulukutu          #+#    #+#             */
/*   Updated: 2023/03/14 14:28:58 by aulukutu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unsigned_int(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

int	ft_unsigned_putnbr(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
		ft_unsigned_putnbr(nbr / 10);
	ft_putchar((nbr % 10 + '0'));
	i += ft_strlen_unsigned_int(nbr);
	return (i);
}
