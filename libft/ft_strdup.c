/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 07:44:29 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/10 09:37:49 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	if (!(s2 = (char *)malloc((sizeof(char) * ft_strlen(s1)))))
		return (NULL);
	i = 0;
	while (*s1)
	{
		s2[i] = *s1;
		s1++;
		i++;
	}
	return (s2);
}
