/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:03:41 by shagazi           #+#    #+#             */
/*   Updated: 2018/02/27 17:21:42 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' || *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	printf("%d\n", ft_strcmp("this", "this"));
	printf("%d\n", ft_strcmp("This", "ThiS"));
	printf("%d\n", ft_strcmp("ThiS", "This"));
	printf("%d\n\n", ft_strcmp("Thi", "This"));

printf("%d\n", strcmp("This", "This"));
printf("%d\n", strcmp("This", "ThiS"));
printf("%d\n", strcmp("ThiS", "This"));
printf("%d\n\n", strcmp("Thi", "This"));
return (0);
}

