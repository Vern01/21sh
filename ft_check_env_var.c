/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_env_var.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 09:15:15 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/16 09:15:18 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh21.h"

int		ft_check_env_var(char *arg, char **env)
{
	int		i;
	char	*temp;

	i = 0;
	temp = ft_strjoin(arg, "=");
	if (temp)
	{
		while (env[i])
		{
			if (ft_strstr(env[i], temp) == env[i])
			{
				free(temp);
				return (i);
			}
			i++;
		}
		free(temp);
	}
	return (-1);
}
