/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_terminal_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 09:02:51 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/15 10:00:20 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

void init_terminal_data()
{
	char	*buf;
	char	*term;
	int		response;

	buf = NULL;
	term = getenv("TERM");
	if (term == NULL)
		exit_msg("Setting TERM env failed\n");
	if ((response = tgetent(TERM_BUF, term)) < 0)
		exit_msg("Termcap access failed\n");
	else if (response == 0)
		exit_msg("Terminal element type is not defined\n");
}
