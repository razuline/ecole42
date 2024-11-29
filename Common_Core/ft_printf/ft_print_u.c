/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:28:55 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/29 15:39:48 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_u(unsigned int n, int *len)
{
	if (n < 10)
		ft_putchar(n + '0', len);
	else 
	{
		ft_print_nbr(n / 10, len);
		ft_print_nbr(n % 10, len);
	}
	return (*len);
}

#include <stdio.h>

int	main(void)
{
	int nb;
	int	len;

	nb = -1;
	len = ft_print_u(nb, &len);
	printf("\n%d\n", len);
	return (0);
}
