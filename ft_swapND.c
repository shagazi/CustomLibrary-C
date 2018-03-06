/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 17:38:18 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/05 19:31:28 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_swap(char *a, char *b)
{
    char tmp;
    int i;

    i = 0;
    while(i < n)
    { 
      tmp = a[i];
      a[i] = b[i];
      b[i] = tmp;
      i++;
	  n--;
    }
	return(a);
}

int main()
{
    char a1[50] = "This was A";
    char b1[50] = "Now its B";
    printf("%c\n", ft_swapn(a1, b1, 10));
	char a2[50] = "This was A";
	const char b2[50] = "Now its B";
	printf("%s\n", memmove(a2, b2, 5));
    return(0);
}
