/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_term_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:16:20 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/14 12:26:08 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

void	get_term_info(t_info *info)
{
	char	*temp;

	info->cl_string = tgetstr("cl", BUFFADDR);
	info->cm_string = tgetstr("cm", BUFFADDR);
	info->auto_wrap = tgetflag("am");
	info->height = tgetnum("li");
	info->width = tgetnum("co");
	temp = tgetstr("pc", BUFFADDR);
	info->pc = temp ? *temp : 0;
	info->bc = tgetstr("le", BUFFADDR);
	info->up = tgetstr("up", BUFFADDR);
}
