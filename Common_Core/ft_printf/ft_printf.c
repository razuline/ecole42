/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/30 18:15:24 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	unsigned int	printed;
	va_list			arg;

	va_start(arg, format);
	
	if (*format == NULL || format[0] == '%' && format[1] == '\0')
		return (-1);

	va_end(arg);
	return (printed);
}

int	main(void)
{
	char c = 'G';
	char *str = "Hello, World!";

	ft_printf("%c\n", c);
	ft_printf("%s\n", str);
	return (0);
}
