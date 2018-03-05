/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 21:58:59 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/01 20:01:29 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dest, char *src, size_t n)
{
	int i;
	int j;
	size_t len;

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
	return (&dest[i + j]);
}


int main()
{
	char a[50] = "Shreef";
	char b[50] = "hagazi";
	printf("%s\n",ft_strlcat( a, b, 5));
	return(0);
}
