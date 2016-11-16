/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readline.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:25:24 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/15 14:25:27 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char *readline(void)
{
	int		pos;
	char	*buf;
	char	c;

	pos = 0;
	if (!(buf = (char *)malloc(sizeof(char) * BUFFER_SIZE)))
		exit_msg("Could not malloc");
	while (1)
	{
		c = ft_getchar(0);
		if (c == EOF || c == '\n')
		{
			buf[pos] = '\0';
			return (buf);
		}
		else
			buf[pos++] = c;
	}
}
