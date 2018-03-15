/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 17:33:49 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/13 16:45:25 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*a1;
	unsigned char 		*b1;

	a1 = (unsigned char *)s1;
	b1 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		a1[i] = b1[i];
		i++;
	}
	return (a1);
}
