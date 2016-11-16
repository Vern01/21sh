/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 08:21:35 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 16:53:05 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	j;
	char	*str;

	i = ft_strlen(s);
	j = 0;
	if (!(str = (char *)malloc(sizeof(*str) * i)))
		return (NULL);
	while (j < i)
		*str++ = f(s[j++]);
	return (str);
}
