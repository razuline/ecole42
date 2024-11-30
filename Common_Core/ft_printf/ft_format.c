/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:03:22 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/30 18:16:19 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(const char *format, va_list args)
{
	int	printed;

	if (*format == '%')
		printed = ft_print_char('%');
	else if (*format == 'c')
		printed = ft_print_char(va_arg(args, int));
	else if (*format == 's')
		printed = ft_print_str(va_arg(args, char *));
	else if (*format == 'p')
		printed = 
	else if (*format == 'd' || 'i')
		printed = ft_print_nbr(va_arg(args, int));
	else if (*format == 'u')
		printed = ft_print_u(va_arg(args, unsigned int));
	else if (*format == 'x' || 'X')
		printed = 
	else if (*format == '%')
		printed = 
	return (printed);
}