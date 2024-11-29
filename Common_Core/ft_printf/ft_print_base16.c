/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base16.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:44:02 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/29 16:23:31 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_addprefix(void *prefix, int *len)
{
	
}

int	ft_print_base16(unsigned int nb, char Xx, int *len)
{
	unsigned int	base_len;
	char			*base;

	base_len = 16;
	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb < base_len)
		ft_putchar(base[nb % base_len], len);
	else
		ft_print_base16(nb / base_len, Xx, len);
		ft_print_base16(nb % base_len, Xx, len);
}

int	main(void)
{
	int n = 1128;
	
	
}