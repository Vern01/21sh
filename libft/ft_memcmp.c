/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:41:25 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/13 11:15:44 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	t;
	char	*temp1;
	char	*temp2;

	temp1 = (char *)s1;
	temp2 = (char *)s2;
	t = 0;
	while (t < n)
	{
		if (temp1[t] != temp2[t])
			return (temp1[t] - temp2[t]);
		t++;
	}
	return (0);
}
