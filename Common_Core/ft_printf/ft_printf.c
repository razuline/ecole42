/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 20:37:20 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	int		ch;
	char	*str;
	va_list	args;

	va_start(args, format);

	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				ft_print_char('%');
				len++;
			}	
			else if (*format == 'c')
			{
				ch = va_arg(args, int);
				ft_print_char(ch);
				len++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				ft_print_str(str);
				len++;
			}
		}
		else
		{
			ft_print_str(format);
			len++;
		}
		format++;	
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	char c = 'G';
	char *str = "Hello, World!";

	ft_printf("%c\n", c);
	ft_printf("%s\n", str);
	return (0);
}
