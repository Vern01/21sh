/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:10:54 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 17:46:00 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *const s1, char const *s2, size_t size)
{
	char	*s;
	size_t	i;

	s = s1;
	i = ft_strlen(s);
	while (*s2 != '\0' && size > 0)
	{
		s[i] = *s2++;
		i++;
		size--;
	}
	s[i] = '\0';
	return (s1);
}
