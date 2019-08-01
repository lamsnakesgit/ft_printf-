/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:32:07 by ddratini          #+#    #+#             */
/*   Updated: 2019/07/28 18:55:49 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			main(int ac, char **av)
{
	char **m;

	m = (char **)malloc(sizeof(char *) * 3);
	*m = (char *)malloc(sizeof(char) * 3);
	m++;
	*m = (char *)malloc(sizeof(char) * 3);
	m[0] = "FR";
	m[1] = "EF";
	printf("%s\n", *m++);
	printf("%s\n", *m++);
	printf("%s\n", *m++);
//	printf("%s\n", *m);
	return (0);
}
