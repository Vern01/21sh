/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 13:34:07 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/13 11:10:18 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *const dst, const void *src, size_t n)
{
	char		*tempd;
	const char	*temps;
	size_t		i;

	tempd = (char *)dst;
	temps = (const char *)src;
	i = 0;
	while (i < n)
	{
		*tempd++ = temps[i];
		i++;
	}
	return (dst);
}
