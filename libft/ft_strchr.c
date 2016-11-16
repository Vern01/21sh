/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 13:34:41 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 17:54:24 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	t;
	char	*str;

	i = 0;
	t = ft_strlen(s);
	str = (char *)s;
	while (i < t && s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return (&str[i]);
	else
		return (NULL);
	}
