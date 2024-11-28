/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:46:37 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 14:57:41 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_base10(int n)
{
	while (n >= '0' && n <= '9')
	{
		ft_putchar(n + '0');
		while 
	}
		
}

int	main(void)
{
	int nb;

	nb = 9;
	ft_print_base10(nb);
	return (0);
}
