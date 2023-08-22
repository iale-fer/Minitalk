/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:59:48 by eleon-go@st       #+#    #+#             */
/*   Updated: 2023/08/22 15:24:01 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hexaconverter(unsigned int long num, char *str)
{
	int	x;

	x = 0;
	if (num >= 16)
	{
		x += ft_hexaconverter(num / 16, str);
		x += ft_hexaconverter(num % 16, str);
	}
	else
		x += ft_putchar(str[num % 16]);
	return (x);
}

int	ft_hexadecimal(unsigned int num, char c)
{
	int	x;

	x = 0;
	if (c == 'x')
		x += ft_hexaconverter(num, "0123456789abcdef");
	else
		x += ft_hexaconverter(num, "0123456789ABCDEF");
	return (x);
}

int	ft_saver(unsigned int long ptr)
{
	int	x;

	x = ft_hexaconverter(ptr, "0123456789abcdef");
	return (x);
}
