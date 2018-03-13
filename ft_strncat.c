/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:36:25 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/12 19:27:48 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	int		i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && len != n)
	{
		dest[i + j] = src[j];
		j++;
		len = ft_strlen(&src[j]);
	}
	dest[i + j] = '\0';
	return (dest);
}
