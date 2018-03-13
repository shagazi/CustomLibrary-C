/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 13:32:16 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/12 19:25:49 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *str1, char *str2, size_t n)
{
	size_t len;
	size_t len2;

	len = ft_strlen(str1);
	len2 = ft_strlen(str2);
	while ((len == len2) && (len != '\0' || len == n))
	{
		len++;
		len2++;
	}
	return (*str1 - *str2);
}
