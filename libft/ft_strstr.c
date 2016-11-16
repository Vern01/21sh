/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 14:32:28 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 16:00:46 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkmatch(int i, const char *big, const char *little)
{
	size_t	j;

	j = 1;
	while (little[j] != '\0' && big[i + 1] != '\0')
	{
		i++;
		if (big[i] != little[j])
			break ;
		j++;
	}
	if (j == (ft_strlen(little)))
		return (1);
	else
		return (0);
}

char		*ft_strstr(const char *big, const char *little)
{
	int	st;
	int	i;

	if (little[0] == '\0')
		return ((char *)big);
	else
	{
		st = 0;
		while (big[st] != '\0')
		{
			i = st;
			if (big[i] == little[0])
			{
				if (checkmatch(i, big, little) == 1)
					return ((char *)&big[st]);
			}
			st++;
		}
		return (NULL);
	}
}
