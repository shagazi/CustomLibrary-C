/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 17:33:49 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/12 16:30:15 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int					i;
	unsigned char		*a1;
	unsigned const char *b1;

	a1 = s1;
	b1 = s2;
	i = 0;
	while (i < n)
	{
		a1[i] = b1[i];
		i++;
	}
	return (a1);
}
