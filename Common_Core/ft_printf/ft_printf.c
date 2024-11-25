/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/25 16:04:58 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int		numofchar;
	va_list	arg_list;
	va_start(arg_list, format);
	
	numofchar = 0;
	while (*format)
	{
		if (*format == '%')
		{
	format++;
			if (*format == '%')
			{
				if (*format == '%')
					write(1, '%', 1);
			}
		}
	}
}