/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:18:16 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/24 16:10:28 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static	int	put_out(int fd, char *str, int len)
{
	int	i;

	i = 0;
	if (len > 0)
	{
		while (i < len)
		{
			write(fd, (str + len - 1 - i), 1);
			i++;
		}
	}
	return (len);
}

int	putnbr(int n, int fd, unsigned int sign)
{
	char		str[20];
	int			i;
	long int	nn;

	ft_bzero(str, 20);
	nn = (long) n;
	i = 0;
	if (nn == 0)
		str[i++] = '0';
	else
	{
		while (nn != 0 && i < 20)
		{
			if (nn > 0)
				str[i++] = nn % 10 + '0';
			else
				str[i++] = -nn % 10 + '0';
			nn = nn / 10;
		}
		if (n < 0)
			str[i++] = '-';
	}
	if ((sign & 0x000F) && n >= 0)
	{
		str[i++] = '+';
		return (put_out(fd, str, i));
	}
	else if ((sign & 0x00F0) && n >= 0)
		str[i++] = ' ';
	return (put_out(fd, str, i));
}
