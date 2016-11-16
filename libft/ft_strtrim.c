/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 17:48:14 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 16:38:32 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == ',' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j] != ' ' || s[j] != ',' || s[j] != '\n' || s[j] != '\t')
		j--;
	if (!(str = (char *)malloc(sizeof(*str) * (j - i))))
		return (NULL);
	while (i <= j)
		*str++ = s[i++];
	*str = '\0';
	return (&(str[0]));
}
