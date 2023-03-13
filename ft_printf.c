/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:53:16 by aulukutu          #+#    #+#             */
/*   Updated: 2023/03/13 14:26:44 by aulukutu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list ap, char check)
{
	int	len;

	if (check == 'd' || check == 'i')
		len = ft_flag_d(va_arg(ap, int));
	else if (check == 'c')
		len = ft_flag_c(va_arg(ap, int));
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	ap;
	int		len;

	i = -1;
	va_start(ap, s);
	len = 0;
	while (s[++i])
	{
		if (s[i] == '%')
			len += ft_check(ap, s[++i]);
		else
			len += write(1, &s[i], 1);
	}
	va_end(ap);
	return (len);
}
