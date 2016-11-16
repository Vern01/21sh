/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env_var.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 09:14:22 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/16 09:14:38 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sh21.h"

char	*ft_get_env_var(char **env, int ind)
{
	char	*re;
	char	**split;

	re = NULL;
	if (ind > -1)
	{
		if (env[ind])
		{
			split = ft_strsplit(env[ind], '=');
			re = ft_strdup(split[1]);
			if (split)
				ft_free_str_arr(&split);
		}
	}
	return (re);
}
