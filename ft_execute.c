/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 08:03:46 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/16 08:03:48 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

int		ft_execute(char **array)
{
	pid_t	pid;
	pid_t	wpid;
	int		status;

	pid = fork();
	if (pid == 0)
	{
		if (/*Find program and execute here*/1)
			exit_msg("The programe could not execute");
		exit(0);
	}
	else if (pid < 0)
		exit_msg("Fork failed");
	wpid = waitpid(pid, &status, WUNTRACED);
	while (!WIFEXITED(status) && !WIFSIGNALED(status))
		wpid = waitpid(pid, &status, WUNTRACED);
	return (1);
}