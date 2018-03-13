/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 16:14:59 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/12 16:24:54 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		sizestr;

	if (!s1 || !s2)
		return (NULL);
	sizestr = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(fresh = ft_strnew(sizestr)))
		return (NULL);
	fresh = ft_strcat((char*)s1, (char*)s2);
	return (fresh);
}
