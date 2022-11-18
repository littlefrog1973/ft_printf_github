/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:52:01 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/18 21:50:42 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	check_fstr(const char **fstr, va_list ar_lst, int *no_prn)
{
	if (**fstr == '%')
	{
		if (ft_strchr("csdixXpu", *(*fstr + 1)))
			*fstr += 2;
		if (*(*fstr - 1) == 'c')
		{
			ft_putchar_fd(va_arg(ar_lst, int), 1);
			return (++(*no_prn));
		}
		if (*(*fstr - 1) == 's')
			return (*no_prn += putstr(va_arg(ar_lst, char *), 1));
		if (*(*fstr - 1) == 'd' || *(*fstr - 1) == 'i')
			return (*no_prn += putnbr(va_arg(ar_lst, int), 1));
		if (*(*fstr - 1) == 'x' || *(*fstr - 1) == 'X')
			return (*no_prn += puthex(va_arg(ar_lst, int), 1, (*(*fstr - 1))));
		if (*(*fstr - 1) == 'p')
			return (*no_prn += putptr(va_arg(ar_lst, void *), 1));
		if (*(*fstr - 1) == 'u')
			return (*no_prn += putunbr(va_arg(ar_lst, unsigned int), 1));
	}
	return (0);
}

int	ft_printf(const char *fstr, ...)
{
	va_list	ar_lst;
	int		no_prn;

	va_start(ar_lst, fstr);
	no_prn = 0;
	while (*fstr)
	{
		if (*fstr == '%' && *(fstr + 1) == '%')
		{
			fstr += 2;
			ft_putchar_fd('%', 1);
			++no_prn;
		}
		else if (!check_fstr(&fstr, ar_lst, &no_prn))
		{
			if (!(*fstr))
				break ;
			ft_putchar_fd(*(fstr), 1);
			fstr++;
			no_prn++;
		}
	}
	va_end(ar_lst);
	return (no_prn);
}
