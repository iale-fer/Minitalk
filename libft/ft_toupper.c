/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:35:04 by eleon-go@st       #+#    #+#             */
/*   Updated: 2023/08/22 15:20:54 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c -32);
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