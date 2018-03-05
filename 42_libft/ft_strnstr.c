/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:47:23 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/01 20:05:06 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int i;
	int j;
	size_t k;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && k <= len)
	{
		if (needle[j] == '\0')
			return (&haystack[i]);
		while (haystack[i] == needle[j])
		{
			return (&haystack[i]);
			i++;
			j++;
		}
		i++;
		k = ft_strlen(&haystack[i]);
	}
	return (NULL);
}
