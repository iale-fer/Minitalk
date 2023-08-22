/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iale-fer <iale-fer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:55:13 by eleon-go          #+#    #+#             */
/*   Updated: 2023/08/22 15:21:18 by iale-fer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		leng_s;
	char	*pts;

	leng_s = ft_strlen((const char *)(s));
	pts = (char *)(s + leng_s);
	while ((leng_s > 0) && *pts != (char)c)
	{
		pts--;
		leng_s--;
	}
	if (*pts == (char)c)
		return (pts);
	return (NULL);
}
