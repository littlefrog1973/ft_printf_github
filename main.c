/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:29:07 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/15 16:27:55 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
	int prtf_ret;
	int ft_prtf_ret;
	size_t ptr;
	void	*v_ptr;
	void	*null_ptr;

	v_ptr = (void *) &ft_prtf_ret;
	null_ptr = NULL;

	printf("c = %c\n", 'c');
	ft_printf("c = %c\n", 'c');

	prtf_ret =       printf("s = %s, c = %c, s2 = %s\n", "0123456789", 'a', "\050");
	ft_prtf_ret = ft_printf("s = %s, c = %c, s2 = %s\n", "0123456789", 'a', "\050");
	printf("prtf_return = %d, ft_prtf_return = %d\n", prtf_ret, ft_prtf_ret);

	prtf_ret =       printf("number in HEX = %X, str = %s, char = %c\n", -32, "test", 't');
	ft_prtf_ret = ft_printf("number = %i, str = %s, char = %c\n", INT_MAX, "test",'t');
	printf("prtf_return = %d, ft_prtf_return = %d\n", prtf_ret, ft_prtf_ret);

	printf("int ptr = %p\n", &prtf_ret);
	ptr = (size_t) &prtf_ret;
	printf("size_t conversion of int ptr = %lu\n", ptr);

	printf("void ptr = %p\n", v_ptr);
	ptr = (size_t) v_ptr;
	printf("size_t conversion of void ptr = %lu\n", ptr);

	printf("ptr to NULL = %p\n", null_ptr);
	ptr = (size_t) null_ptr;
	printf("size_t conversion of ptr to NULL = %lu\n", ptr);

	prtf_ret = printf("prtf NULL=%p\n", null_ptr);
	ft_prtf_ret = ft_printf("ftpf NULL=%p\n", null_ptr);
	printf("number of char in case of NULL: prtf = %d, ft_prtf =%d\n", prtf_ret, ft_prtf_ret);
	printf("ptr to int ptr = %p\n", &ft_prtf_ret);
	ft_printf("ptr to int ptr ft = %p\n", &ft_prtf_ret);

	printf("   hex int = %X\n", -999999999);
	ft_printf("ft hex int = %X\n", -999999999 );
	printf("   unsigned int = %u\n", UINT_MAX);
	ft_printf("unsigned int = %u\n", UINT_MAX );

	printf("signed format with UINT_MAX= %d\n", UINT_MAX);
	ft_printf("signFT format with UNIT_MAX= %d\n", UINT_MAX);

//	printf("%%", UINT_MAX);
	ft_printf("%%\n");

	printf(" NULL %s NULL \n",(char *) NULL);
	ft_printf(" NULL %s NULL \n", (char*) NULL);

//	prtf_ret = printf(" NULL %s NULL \n",(char *) NULL);
//	ft_prtf_ret = ft_printf(" NULL %s NULL \n", (char*) NULL);
	prtf_ret = printf("%s", (char *) NULL);
	ft_prtf_ret = ft_printf("%s", (char*) NULL);
	printf("prtf_return = %d, ft_prtf_return = %d\n", prtf_ret, ft_prtf_ret);

	printf("%c%c%c*", '\0', '1', 1);
	printf("\n");
	ft_printf("%c%c%c*", '\0', '1', 1);
	ft_printf("\n");
	return (0);
}