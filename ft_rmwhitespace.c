/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmwhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 16:30:24 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/08 18:47:06 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rmwhitespace(char *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	while (s[k] != '\0')
		k++;
	k--;
	while (s[k] == ' ' || s[k] == '\n' || s[k] == '\t')
		k--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	str = ft_strnew(k - i + 1);
	while (i <= k)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
