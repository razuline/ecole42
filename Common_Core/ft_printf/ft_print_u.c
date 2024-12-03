/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:28:55 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/03 14:28:19 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_u_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_print_u(unsigned int nbr)
{
	int		len;
	char	*num;

	len = 0;
	if (nbr == 0)
		len += ft_printchar('0');
	else
	{
		num = ft_itoa(nbr);
		len += ft_printstr(num);
		free(num);
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb;
	int	len;

	nb = 1;
	len = ft_print_u(nb, &len);
	printf("\n%d\n", len);
	return (0);
}
*/