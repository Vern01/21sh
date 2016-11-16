/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 14:36:59 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 17:39:09 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned char	cc;
	size_t			t;

	str = (const char *)s;
	t = 0;
	cc = (unsigned char)c;
	while (t < n && str[t] != cc && str[t] != '\0')
		t++;
	if (str[t] == cc)
		return ((void *)&(str[t]));
	else
		return (NULL);
}
