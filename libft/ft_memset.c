/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 17:53:25 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 16:21:04 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*s;
	size_t			i;
	unsigned char	cc;

	s = (char *)b;
	i = 0;
	cc = c;
	while (i < len)
	{
		s[i] = cc;
		i++;
	}
	return (b);
}
