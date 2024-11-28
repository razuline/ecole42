/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:03:22 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 21:03:59 by erazumov         ###   ########.fr       */
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
	/*else if (*format == 'p')
		len =*/ 
	return (len);
}