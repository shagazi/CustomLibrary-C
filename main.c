/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:08:43 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/06 00:15:22 by shagazi          ###   ########.fr       */
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
/***
int main()
{
	char a[50] = "This is memccpy";
	char b[50] = "Copied String";
	printf("ft_memccpy output: %s\n", ft_memccpy(a,b,'S',10));
	char a2[50] = "This is memccpy";
	char b2[50] = "Copied String";
	printf("ft_memccpy output: %s\n", ft_memccpy(a2,b2,'C',10));
	char a1[50] = "This is memccpy";
	char b1[50] = "Copied String";
	printf("memccpy output: %s\n", memccpy(a1,b1,'S',10));
	char a3[50] = "This is memccpy";
	char b3[50] = "Copied String";
	printf("memccpy output: %s\n", memccpy(a3,b3,'C',10));
	return(0);
}
***/

/***ft_memmove_***/
/***
int main()
{
    char a1[50] = "This was A";
    char b1[50] = "Now its B";
    printf("%s\n", ft_memmove(a1, b1, 10));
	char a2[50] = "This was A";
	const char b2[50] = "Now its B";
	printf("%s\n", memmove(a2, b2, 5));
	return 0;
}
***/

/***ft_memchr***/
/***
int main()
{
	char chr1[256] = "This is ft_memchr";
	char chr2[256] = "This is ft_memchr";
    printf("%s\n",ft_memchr(chr1, 'c', 16));
    printf("%s\n",ft_memchr(chr1, 'c', 3));
	printf("%s\n",ft_memchr(chr2, 'z', 16));
   	printf("%s\n",memchr(chr1, 'c', 16));
    printf("%s\n",memchr(chr1, 'c', 3));
	printf("%s\n",memchr(chr1, 'z', 16));
    return 0;
}
***/

/***ft_memcmp***/
/***
int main()
{
	char s1[256] = "This is ft_memcmp";
	char s2[256] = "This is ft_memcmp";
	char a1[256] = "This is Not memcmp";
	char a2[256] = "This is memcmp";
	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("%d\n", ft_memcmp(a1, a2, 10));
	printf("%d\n", memcmp(s1, s2, 10));
	printf("%d\n", memcmp(a1, a2, 10));
	return(0);
}
***/

/***ft_strdup***/
/***
int main()
{
	char s1[] = "This is ft_strdup";
	printf("%s\n", ft_strdup(s1));
	printf("%s\n", strdup(s1));
	return(0);
}
**/	
