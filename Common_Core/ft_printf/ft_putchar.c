/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:43:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 21:15:10 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
		(*len)++;
}

int	main(void)
{
	char	c;
	int		len;
	int		*ptr;

	c = 'G';
	len = 1;
	ptr = &len;
	ft_putchar(c, &len);
	ft_putchar('\n', &len);
	return (0);
}
