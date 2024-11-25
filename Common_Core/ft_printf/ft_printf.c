/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/25 17:07:48 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_ifnostr(const char *format, ...)
{
	int		i;
	int		index;
	char	spcf;
	char	*buffer;
	va_list	arg_list;
	
	va_start(arg_list, format);

	i = 0;
	index = 0;
	buffer = BUFF_SIZE;
	while (format[i])
	{
		buffer[index++] = format[i++];
		if (format[i + 1] == '%' || format[i + 1] == '\0')
		{
			buffer[index] = '\0';
			index = 0;
			if (buffer[0] != '%')
				write(1, buffer[index++], 1);
		}
	}
}

