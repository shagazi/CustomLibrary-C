/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nochar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 21:45:36 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/11 00:34:16 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_nochar(char *s, char c)
{
	int		i;
	int		k;
	char	*str;

	k = 0;
	i = 0;
	while (s[i] != '\0' || s[i] == c)
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				i++;
				k++;
			}
			i -= k;
			str = ft_strsub(s, i, k);
			k += i - 1;
			while (i <= k)
				s[i++] = c;
			return (str);
		}
		i++;
	}
	return (0);
}
