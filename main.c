/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:29:07 by sdeeyien          #+#    #+#             */
/*   Updated: 2022/11/27 00:25:40 by sdeeyien         ###   ########.fr       */
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
	char test[] = "0123456789";
//	size_t ptr;
//	void	*v_ptr;
//	void	*null_ptr;

//	v_ptr = (void *) &ft_prtf_ret;
//	null_ptr = NULL;

	printf("c = %c\n", '\77');
	ft_printf("c = %c\n", '\77');
/*
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
*/
/*
	prtf_ret = printf("   hex int = %#x %%\n", 1000);
	ft_prtf_ret = ft_printf("ft hex int = %#x %%\n", 1000 );
	printf("prtf_ret = %d, ft_prtf_ret = %d\n", prtf_ret, ft_prtf_ret);
*/
/*
	prtf_ret = printf("%++i this is %i getting%+ix hard :/\n", (int)-2147486, -2, 42);
	ft_prtf_ret = ft_printf("%++i this is %i getting%+ix hard :/\n", (int)-2147486, -2, 42);
*/
	prtf_ret    =    printf(" % s \n", "-");
	ft_prtf_ret = ft_printf(" % s \n", "-");
	printf("prtf_ret = %d, ft_prtf_ret = %d\n", prtf_ret, ft_prtf_ret);
/*
	printf("new flags ===*****===\n");
	printf("new flags ===%5c===\n", 99);
*/
/*
	if (__linux__)
		printf("We are in Linux\n");
	else
		printf("We are in Mac\n");
	ft_printf("Null ptr = %p\n", NULL);
*/
	printf("sizeof string_constant = %lu\n", sizeof(test));

/*	printf("   unsigned int = %u\n", UINT_MAX);
	ft_printf("unsigned int = %u\n", UINT_MAX );

	printf("signed format with UINT_MAX= %d\n", UINT_MAX);
	ft_printf("signFT format with UNIT_MAX= %d\n", UINT_MAX);

//	printf("%%", UINT_MAX);
	ft_printf("%%\n");

	printf(" NULL %s NULL \n",(char *) NULL);
	ft_printf(" NULL %s NULL \n", (char*) NULL);

	prtf_ret = printf(" NULL %s NULL \n",(char *) NULL);
	ft_prtf_ret = ft_printf(" NULL %s NULL \n", (char*) NULL);

	prtf_ret = printf("%s\n", (char *) NULL);
	ft_prtf_ret = ft_printf("%s\n", (char *) NULL);
	printf("prtf_return = %d, ft_prtf_return = %d\n", prtf_ret, ft_prtf_ret);


	prtf_ret = printf("%c%c%c*", '\0', '1', 1);
	printf("\n");
	ft_prtf_ret = ft_printf("%c%c%c*", '\0', '1', 1);
	ft_printf("\n");
*/
	return (0);
}
