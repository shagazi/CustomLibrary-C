/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 22:24:38 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/14 13:17:21 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
	unsigned char	ch;
	int				i;

	ch = c;
	i = 0;
	if (ch == '\0')
	{
		while (str[i] != '\0')
			i++;
		if (str[i] == '\0')
			return (&str[i]);
	}
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
