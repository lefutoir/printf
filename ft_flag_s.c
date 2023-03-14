/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:48:43 by aulukutu          #+#    #+#             */
/*   Updated: 2023/03/14 14:28:58 by aulukutu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_s(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
		len = ft_putstr("(null)");
	else
		len = ft_putstr(str);
	return (len);
}
