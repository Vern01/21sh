/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 12:44:12 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/15 12:44:16 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char    *ft_realloc(char *p, size_t size)
{
    char    *temp;
    int     i;  

    temp = p;
    if (!(p = (char *)malloc(sizeof(char) * size)))
        return (NULL);
    i = 0;
    while (temp[i])
    {   
        p[i] = temp[i];
        i++;
    }   
    free(temp);
    return (p);
}
