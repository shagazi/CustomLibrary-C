/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:58:59 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/06 20:23:19 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *str);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int i;
	int j;
	size_t len;
	char *s2;

	i = 0;
	j = 0;
	s2 = (char *) src;
	while (dest[i] != '\0')
		i++;
	while (s2[j] != '\0' && len != size)
	{
		dest[i + j] = s2[j];
		j++;
		len = ft_strlen(&);
	}
	dest[i + j] = '\0';
	return (len);
}


int main()
{
	char a[50] = "Shreef";
	char b[50] = "hagazi";
	printf("%lu\n",ft_strlcat(a, b, 5));
	return(0);
}
