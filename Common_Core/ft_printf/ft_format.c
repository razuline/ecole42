/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:03:22 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/29 15:41:40 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(const char *format, va_list args)
{
	int	len;

	if (*format == '%')
		len = ft_print_char('%');
	else if (*format == 'c')
		len = ft_print_char(va_arg(args, int));
	else if (*format == 's')
		len = ft_print_str(va_arg(args, char *));
	else if (*format == 'p')
		len = 
	else if (*format == 'd' || 'i')
		len = ft_print_nbr(va_arg(args, int));
	else if (*format == 'u')
		len = ft_print_u(va_arg(args, unsigned int));
	else if (*format == 'x' || 'X')
		len = 
	else if (*format == '%')
		len = 
	return (len);
}