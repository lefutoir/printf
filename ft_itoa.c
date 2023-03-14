/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:40:42 by aulukutu          #+#    #+#             */
/*   Updated: 2023/03/14 11:41:37 by aulukutu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(int n)
{
    char	*str;
    int		i;
    int		neg;

    i = 0;
    neg = 0;
    if (n < 0)
    {
        neg = 1;
        n = -n;
    }
    str = (char *)malloc(sizeof(char) * 12);
    if (!str)
        return (NULL);
    while (n > 9)
    {
        str[i++] = n % 10 + '0';
        n /= 10;
    }
    str[i++] = n + '0';
    if (neg)
        str[i++] = '-';
    str[i] = '\0';
    return (str);
}
