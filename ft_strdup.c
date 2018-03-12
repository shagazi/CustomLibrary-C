/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 23:30:19 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/11 01:15:43 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
		len++;
	if (!(str = (char*)malloc(sizeof(str) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
