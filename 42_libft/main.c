/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:08:43 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/05 15:12:34 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*******ft_memset********/
/***
int main()
{
	char str1[256] = "This is ft_memset.c";
	printf("%s\n", ft_memset(str1, 'a', 4));
	char str[256] = "This is memset.c";
	printf("%s\n", memset(str, 'a', 4));
	return(0);
}
***/

/*******ft_b_zero********/
/***
int main()
{
	char str1[256] = "This is ft_bzero.c";
	printf("This is ft_bzero %s\n", ft_bzero(str1, 4));
	char str[256] = "This is bzero.c";
	printf("This is bzero %s\n", bzero(str, 4));
	return(0);
}
***/

/*******ft_memcpy.c******/
/***
int main()
{
	char str1[256] = "This is ft_memcpy";
	char str2[256] = "Copied string";
	printf("This is ft_memcpy %s\n", ft_memcpy(str1, str2, 6));
	char strA[256] = "This is memcpy";
	char strB[256] = "Copied string";
	printf("This is memcpy %d\n", memcpy(strA, strB, 6));
	return(0);
}
***/

/***ft_memccpy.c***/
///***
int main()
{
	char a[50] = "This is ft_memccpy";
	char b[50] = "Copied String";
	char a2[50] = "This is ft_memccpy";
	char b2[50] = "Copied String";
	printf("ft_memccpy output: %s\n", ft_memccpy(a,b,'S',10));
	printf("ft_memccpy output: %s\n", ft_memccpy(a2,b2,'C',10));
	char a1[50] = "This is ft_memccpy";
	char b1[50] = "Copied String";
	printf("memccpy output: %s\n", memccpy(a1,b1,'S',10));
	printf("memccpy output: %s\n", memccpy(a1,b1,'C',10));
	return(0);
}
//***/

