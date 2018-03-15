/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:58:59 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/14 17:14:06 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> /***remove***/

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	size_t	j;
	int		len;
	
	i = 0;
	j = 0;
	len = ft_strlen(dest) + ft_strlen((char*)src);
	while ((dest[i] != '\0') && i < ((int)size -1))
		i++;
/*	if (i > (int) size || size == 0)
		return (len);
	size -= i - 1;*/
 	while (src[j] != '\0' && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	len = 0;
	return (len);
}
/*
int main ()
{
  char a[0xF00] = "there is no stars in the sky";
  char b[37] = "this cake is a lie!\0I'm hidden lol\r\n";
  printf("%zu\n", ft_strlcat(a, b, 40));
  return(0);
}*/
