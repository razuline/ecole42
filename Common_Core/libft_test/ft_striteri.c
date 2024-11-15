/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:51:25 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/15 17:54:24 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(int, char *))
{
	int	i;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

int	main(void)
{
	
}