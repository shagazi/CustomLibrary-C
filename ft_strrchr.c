/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 00:45:18 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/12 19:30:14 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	unsigned char	ch;
	int				i;
	int				counter;

	i = 0;
	ch = c;
	counter = ft_strlen(str);
	while (i <= counter)
	{
		if (str[counter] == ch)
			return (&str[counter]);
		counter--;
	}
	return (NULL);
}
