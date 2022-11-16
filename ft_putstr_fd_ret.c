/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_ret.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:21:12 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/16 17:11:49 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"

int	ft_putstr_fd_ret(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		return (ft_strlen(s));
	}
	else
	{
		write(fd, "(null)", sizeof("(null)") - 1);
		return (sizeof("(null)") - 1);
	}
}
