/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:46:49 by eleon-go          #+#    #+#             */
/*   Updated: 2023/08/22 15:22:14 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pts;

	pts = (char *)(s);
	while (*pts)
	{
		if (*pts == (char)c)
			return (pts);
		pts++;
	}
	if (!(char)c)
		return (pts);
	return (NULL);
}
