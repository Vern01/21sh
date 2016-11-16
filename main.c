/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 07:58:12 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/14 12:48:03 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

int		main(/*int argc, char *argv[]*/)
{
	extern char **environ;
	t_info		info;

	/*
	 * Setting up terminal
	 */
	init_terminal_data();
	get_term_info(&info);
	prompt_user(info);
}
