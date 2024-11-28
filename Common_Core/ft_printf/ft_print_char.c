/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:14:43 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 19:45:14 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/*static int	ft_ifnochar(char c)
{
	if (c)
		return (1);
	return (0);
}
*/
int	ft_print_char(char c)
{
	if (c)
		write(1, &c, 1);
	return (1);
}
/*
int	main(void)
{
	char	c;

	c = 'G';
	ft_print_char(c);
	ft_print_char('\n');
	return (0);
}
*/