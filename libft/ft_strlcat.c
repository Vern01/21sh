/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:10:54 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 17:01:46 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *const s1, char const *s2, size_t size)
{
	char	*s;
	int		i;

	s = s1;
	i = ft_strlen(s) - 1;
	while (*s2 != '\0' && size > 0)
	{
		s[i] = *s2++;
		i++;
		size--;
	}
	s[i] = '\0';
	return (s1);
}