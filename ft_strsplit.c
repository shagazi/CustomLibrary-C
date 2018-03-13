/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 19:21:23 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/12 19:16:22 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	*scpy;
	char	**arr;

	i = 0;
	if (!s)
		return (NULL);
	scpy = ft_strcpy(ft_strnew(ft_strlen((char *)s) + 1), (char *)s);
	while (ft_strcount((char*)scpy, c))
		i++;
	arr = (char **)malloc(sizeof(char*) * i + 1);
	if (!arr)
		return (NULL);
	j = 0;
	while (j < i)
	{
		arr[j] = ft_nochar((char *)s, c);
		j++;
	}
	free(scpy);
	arr[j] = 0;
	return (arr);
}
