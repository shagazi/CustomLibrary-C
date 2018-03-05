/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 22:50:14 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/01 16:30:24 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int number;
	int isneg;

	i = 0;
	number = 0;
	isneg = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		isneg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while ((str[i] >= 48 && str[i] <= 57))
	{
		number *= 10;
		number += (str[i] - 48);
		i++;
	}
	if (isneg)
		return (-number);
	else
		return (number);
}

/*int main ()
{
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", ft_atoi("123123"));
	printf("%d\n", ft_atoi(" -+1231sgasd232"));
	printf("%d\n", atoi("  -+1231sgasd232"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("2147483648"));
	return (0);
}*/
