/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:07:02 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 15:10:16 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*static int	ft_ifnostr(char *s)
{
	if (*s)
		return (1);
	return (0);
}
*/
int	ft_print_str(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len += ft_print_char(str[len]);
	return (len);
}
/*
int	main(void)
{
	char	*str;

	str = "Hello";
	ft_print_str(str);
	return (0);
}
*/