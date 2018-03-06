/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 16:36:07 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/05 19:40:43 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	int			i;
	char		*a1;
	const char	*b1;

	a1 = s1;
	b1 = s2;
	i = 0;
	while (i < n)
	{
		a1[i] = b1[i];
		if (b1[i] == c)
			return (&a1[i + 1]);
		i++;
	}
	return (0);
}
