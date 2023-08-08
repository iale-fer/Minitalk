/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:52:51 by ivanalefern       #+#    #+#             */
/*   Updated: 2023/08/03 16:14:35 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hexachange(unsigned int long num, char *str)
{
	int	x;

	x = 0;
	if (num >= 16)
	{
		x += ft_hexachange(num / 16, str);
		x += ft_hexachange(num % 16, str);
	}
	else
		x += ft_putchar(str[num % 16]);
	return (x);
}

int	ft_pointer(unsigned int long ptr)
{
	int	x;

	x = ft_hexachange(ptr, "0123456789abcdef");
	return (x);
}

int	ft_hexadecimal(unsigned int num, char c)
{
	int	x;

	x = 0;
	if (c == 'x')
		x += ft_hexachange(num, "0123456789abcdef");
	else
		x += ft_hexachange(num, "0123456789ABCDEF");
	return (x);
}
