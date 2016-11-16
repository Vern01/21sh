/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 08:16:52 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/13 11:14:16 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tempd;
	const char	*temps;
	char		temp[len];
	size_t		t;

	tempd = (char *)dst;
	temps = (const char *)src;
	t = 0;
	while (t < len)
	{
		temp[t] = temps[t];
		t++;
	}
	t = 0;
	while (t < len)
	{
		*tempd++ = temp[t];
		t++;
	}
	return (dst);
}
