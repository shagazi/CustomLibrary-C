/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 16:36:07 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/05 15:12:32 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	int 		i;
	char	 	*a1 = s1;
	const char	*b1 = s2;

	i = 0;
	while (s1 != '\0' && i < n)
	{
		a1[i] = b1[i];
		i++;
		if (b1[i] == c)
			return (&a1[i + 1]);
	}
	return (0);
}
