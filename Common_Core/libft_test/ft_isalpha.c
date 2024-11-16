/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:12:32 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/16 14:12:59 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 'G';
	if (ft_isalpha(c) == 1)
		write (1, "Alphabetical character", 23);
	else
		write (1, "Another character", 17);
	return (0);
}
*/