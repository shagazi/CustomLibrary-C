/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:58:59 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/12 18:10:16 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		j;
	int		len;
	char	*s2;

	i = 0;
	j = 0;
	s2 = (char *)src;
	while (dest[i] != '\0')
		i++;
	while (s2[j] != '\0' && size != 0)
	{
		dest[i + j] = s2[j];
		j++;
		size--;
	}
	dest[i + j] = '\0';
	len = ft_strlen(dest);
	return (len);
}
