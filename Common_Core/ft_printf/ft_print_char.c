/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:14:43 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/25 17:54:22 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_ifnochar(char c)
{
	if (c)
		return (1);
	return (0);
}

void	ft_print_char(char c)
{
	if (ft_ifnochar == 1)
		write(1, c, 1);
}

int	main(void)
{
	char c;

	c = 'G';
	printf("%c", c);
	return (0);
}
