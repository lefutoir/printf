/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:48:38 by aulukutu          #+#    #+#             */
/*   Updated: 2023/03/14 14:28:58 by aulukutu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_u(unsigned int nbr)
{
	int	len;

	len = 0;
	len = ft_unsigned_putnbr(nbr);
	if (nbr == 0)
		return (len + 1);
	return (len);
}
