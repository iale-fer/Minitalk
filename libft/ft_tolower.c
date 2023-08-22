/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:59:08 by eleon-go@st       #+#    #+#             */
/*   Updated: 2023/08/22 15:21:05 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c +32);
	return (c);
}

/*
int main(void)
{
	int c;
	c = 'b';
	printf ("Me sale %c\n", ft_toupper(c));
	return (0);
}
*/