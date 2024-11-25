/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:51:25 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/16 14:09:34 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>  

void	f(unsigned int i, char *s)
{
	unsigned int	n;
	
	n = i;
	*s = 'a';
}

int	main(void)
{
	char	*str = "Hello";

	ft_striteri(str, f);
	printf("%s\n", str);
	return (0);
}
*/