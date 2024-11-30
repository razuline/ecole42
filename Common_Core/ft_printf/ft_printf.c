/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/30 14:30:58 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	char			*s;
	char			*buff;

	va_list	args;
	va_start(args, format);

	len = 0;
	while (*format)
	{
			}
			else if (*format == 's')
			{
				str = 
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
