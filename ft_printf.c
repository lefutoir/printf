/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulukutu <aulukutu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:53:16 by aulukutu          #+#    #+#             */
/*   Updated: 2023/03/14 11:51:14 by aulukutu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list inputs, char check)
{
	int	result;

	if (check == 'd' || check == 'i')
		result = ft_flag_d(va_arg(inputs, int));
	else if (check == 'c')
		result = 0;
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	inputs;
	int		i;
	int		result;

	va_start(inputs, format);
	i = -1;
	result = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			result += ft_check(inputs, format[++i]);
		else
			result += write(1, &format[i], 1);
	}
	va_end(inputs);
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	printf("%s\n", "------FT_PRINTF------");
// 	printf("\n%d", ft_printf(" %c %c %c ", 'w', 'a', 'b'));
// 	printf("\n%s\n", "------PRINTF------");
// 	printf("\n%d", printf(" %c %c %c ", 'w', 'a', 'b'));
// }

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", "------FT_PRINTF------");
	printf("\n%d", ft_printf("123aA&@$"));
	printf("\n%s\n", "------PRINTF------");
	printf("\n%d", printf("123a56"));
}