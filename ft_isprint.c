/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:29:34 by shagazi           #+#    #+#             */
/*   Updated: 2018/02/27 17:33:54 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int main()
{
	printf("%d\n", ft_isprint('k'));
printf("%d\n", ft_isprint('8'));
printf("%d\n", ft_isprint('\t'));
printf("%d\n", ft_isprint(' '));
return (0);
}*/
