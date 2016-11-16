/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 14:32:28 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 16:07:54 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cm(int i, const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	t;

	j = 1;
	t = i;
	while (little[j] != '\0' && (t + 1) < len && big[i + 1] != '\0')
	{
		i++;
		if (big[i] != little[j])
			break ;
		j++;
	}
	if (j == ft_strlen(little))
		return (1);
	else
		return (0);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	st;
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	else
	{
		st = 0;
		while (st < len)
		{
			i = st;
			if (big[i] == little[0])
			{
				if (cm(i, big, little, len) == 1)
					return ((char *)&big[st]);
			}
			st++;
		}
		return (NULL);
	}
}
