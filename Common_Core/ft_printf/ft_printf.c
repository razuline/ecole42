/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:50:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/25 17:48:07 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"



int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	int		j;
	char	c;
	va_list	args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
			i++;
			if (format[i] == 'c')





			
	return (len);
}

