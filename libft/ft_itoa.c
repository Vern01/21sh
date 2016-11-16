/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 09:06:29 by vivan-de          #+#    #+#             */
/*   Updated: 2016/05/15 16:19:42 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nchar(int n)
{
	int	i;
	int	counter;

	i = n;
	counter = 1;
	if (i < 0)
		i *= -1;
	while (i < 10)
	{
		i = i / 10;
		counter++;
	}
	return (counter);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		neg;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -1;
	}
	if (!(s = (char *)malloc(sizeof(*s) * (nchar(n) + neg))))
		return (NULL);
	s = s + nchar(n);
	while (n > 10)
	{
		*s-- = (n % 10) + '0';
		n /= 10;
	}
	*s = n + '0';
	if (neg && *s++)
		*s = '-';
	return (s);
}
