/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd_ret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:53:57 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/12 00:53:49 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>

static	void	put_out(int fd, char *str, int len)
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
}

int	ft_puthex_fd_ret(int n, int fd, int hexi)
// hexi = 1 -> HEX, hexi = 0 -> hex
{
	char		str[9];
	int			i;
	unsigned int			rem;

	i = 0;
	while (i < 9)
		str[i++] = '\0';
	i = 0;
	if (n == 0)
		str[i++] = '0';
	else
	{
		rem = (unsigned) n;
		while (rem)
		{
			str[i] = (rem & 15) + '0';
			if (str[i] > '9')
				str[i] = str[i] - ('9' + 1) + 'A' + hexi * ('a' - 'A');
			rem = rem >> 4;
			i++;
		}
	}
	put_out(fd, str, i);
	return (i);
}

