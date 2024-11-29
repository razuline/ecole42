/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:46:37 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/29 15:19:39 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_nbr(int n, int *len)
{
	unsigned int	nb;

	nb = n;
	if (n == -2147483648)
	{
		ft_putchar('-', len);
		ft_putchar('2', len);
		nb = 147483648;
	}
	else if (n < 0)
	{
		ft_putchar('-', len);
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + '0', len);
	else
	{
		ft_print_nbr(nb / 10, len);
		ft_print_nbr(nb % 10, len);
	}
	return (*len);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb;
	int	len;

	nb = 10;
	len = ft_print_nbr(nb, &len);
	printf("\n%d\n", len);
	return (0);
}
*/