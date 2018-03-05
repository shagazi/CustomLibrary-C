/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:56:12 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/01 20:02:35 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (haystack[i] != '\0')
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
	}
	return (NULL);
}
