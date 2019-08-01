/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddratini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 20:19:36 by ddratini          #+#    #+#             */
/*   Updated: 2019/08/01 17:49:10 by ddratini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>//write
# include <stdlib.h>//malloc
# include <stdio.h> //printf
//# include <>//man 3 stdarg func

int			ft_printf(const char *formatm, ...);

#endif
//
