/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:34:41 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 18:10:34 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t 	j;
	size_t	t;
	char	*str;

	i = ft_strlen(s) - 1;
	t = i;
	j = 0;
	str = (char *)s;
	while (j <= t && s[i] != c)
		i--;
	if (s[i] == c)
		return (&str[i]);
	else
		return (NULL);
	
}
