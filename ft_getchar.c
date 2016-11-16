/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:12:09 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/15 14:12:16 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char	ft_getchar(const int fd)
{
	static char	buff[BUFFER_SIZE];
	static char	*p;
	static int	len = 0;
	char		c;

	if (len == 0)
	{
		len = read(fd, buff, BUFFER_SIZE);
		p = (char *)&buff;
		if (len == 0)
			return ('\0');
	}
	c = *p;
	p++;
	len--;
	return (c);
}
