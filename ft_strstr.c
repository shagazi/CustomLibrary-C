/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:56:12 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/14 19:36:28 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int		i;
	int		j;
	size_t	lenneedle;

	i = 0;
	j = 0;
	lenneedle = ft_strlen(needle);
	if (needle[i] == '\0')
		return (&haystack[i]);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			if (ft_strsubncmp(haystack, needle, i, lenneedle) == 0)
				return (&haystack[i]);
			else
				j = 0;
		}
		i++;
	}
	return (0);
}
