/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt_user.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 09:31:31 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/15 09:31:35 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

void    free_array(char **array)
{
    while (*array)
        free(*array++);
    free(array);
}

void    prompt_user()
{
    char    *line;
    char    **array;
    int     res;

    res = 1;
    while (res)
    {
        ft_putstr("$> ");
        line = readline();
        array = ft_strsplit(line, ' ');
//        res = ft_execute(array);
    }
    free(line);
    free_array(array);
}