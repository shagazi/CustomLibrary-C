/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 16:28:21 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/15 00:55:43 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_spacecheck(char *s)
{
	int k;

	k = ft_strlen(s) - 1;
	while ((s[k] == ' ' || s[k] == '\n' || s[k] == '\t') && (k != 0))
		k--;
	return (k);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (s[k] == '\0')
		k = 0;
	else
		k = ft_spacecheck((char *)s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (k <= i)
		str = ft_strnew(0);
	else if (!(str = ft_strnew(k - i + 1)))
		return (NULL);
	while (i <= k)
	{
		str[j] = s[i];
		i += (j += 1) ? 1 : 1;
	}
	return (str);
}
