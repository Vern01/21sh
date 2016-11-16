/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 18:36:00 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 18:32:29 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	if (!(s = (char *)malloc(sizeof(*s) * size)))
		return (NULL);
	while (i < size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
