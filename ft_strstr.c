/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:56:12 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/19 18:43:14 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			if (ft_strcmp(haystack + i, needle) == 0)
					return ((char *)haystack + i);
			else
				j = 0;
		}
		i++;
	}
	return (NULL);
}
