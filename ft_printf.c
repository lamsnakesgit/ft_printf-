/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 20:09:12 by ddratini          #+#    #+#             */
/*   Updated: 2019/07/28 20:17:21 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>
//printf(const char * restrict format, ...);
/*
 * void va_start(va_list ap, last);
 * type  va_arg(va_list ap, type);
 * void      va_copy(va_list dest, va_list src);
 * void  va_end(va_list ap);
 */
int			cut_arg(va_list *apl, char *frmt)
{
	int i;
	while (frmt[i])
	{
		if (frmt[i] == '%' && !(frmt[i + 1])
			return(-2);
		if ()
	}
	return (0);
}

int			ft_printf(const char *frmt, ...)
{
	va_list	apl;
	int ret;

	va_start(apl, frmt);//как проеврить что аргументы есть?
	ret = cut_arg(&apl, frmt);//in
	va_end(apl);
	return (-4); //bytes displayed
	return (0);
}

int			main()
{
	int ret;
	char *frmt;
	frmt = "FUCK %s life %d";
	ret = ft_printf(frmt, "YR", 111);
	ret = printf("ret=%i\n", ret);
	ret = printf("");
	return (0);
}

//////////////////////
/*
int			ft_printf(const char *format, ...)
{
	va_list arg;
//	char sav;

	va_start(arg, format);
//	sav = d;
	printf("ft_? \n");
//	va_start(*arg, format);
	return (0);
}

int			main()
{
	printf("%%\\ n");
	printf("ke\n");
	printf("ft_retrs=%d\n", ft_printf("QWE", 'd'));
	printf("RES=%d ",printf("STRPR"));///ft_printf();
	return (0);
}*/
