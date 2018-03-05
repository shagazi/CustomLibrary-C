/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:31:48 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/01 18:06:06 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memalloc(size_t size)
{
	int i;

	i = 0;
	void *ptr = size;
	return(0);
}

int main()
{
	printf("%d,%s\n", "This has allocated %c, bytes", ft_memalloc(5));
	return(0);
}


