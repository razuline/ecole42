/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:16:39 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/24 15:39:10 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
			c += 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	int	c = 'A';
	int	result = ft_tolower(c);
	printf("%d\n", c);
	printf("%d\n", result);
	return (0);
}
*/