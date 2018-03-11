/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 00:45:52 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/07 00:47:13 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648");
	else if (n < 0)
	{
		ft_putchar_fd('-');
		ft_putnbr_fd(-n);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10);
		ft_putchar_fd(n % 10 + '0');
	}
	else
		ft_putchar_fd(n + '0');
}
