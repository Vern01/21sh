/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 18:39:17 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 16:22:43 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *const dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*tempd;
	char	*temps;

	i = 0;
	tempd = (char *)dst;
	temps = (char *)src;
	while (i < n && temps[i] != c)
	{
		tempd[i] = temps[i];
		i++;
	}
	if (temps[i] == c)
	{
		tempd[i] = c;
		return ((void *)&(tempd[i + 1]));
	}
	return (NULL);
}
