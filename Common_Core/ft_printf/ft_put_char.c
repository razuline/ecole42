/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:43:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/30 17:52:47 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function ft_put_char writes character c to stdout.
c - the character to print;
Returns 1 in case of success, -1 if it's error.
*/

#include "printf.h"

int	ft_put_char(char c)
{
	return (write(1, &c, 1));
}
/*
int	main(void)
{
	char	c;

	c = 'G';
	ft_put_char(c);
	ft_put_char('\n');
	return (0);
}
*/