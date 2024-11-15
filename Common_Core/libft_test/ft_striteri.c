/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razuline <razuline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:51:25 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/15 21:34:03 by razuline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(int, char *))
{
	int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>  

void	func(unsigned int i, char *c)
{
	*c += i;
}

int	main()
{
	char	*str = "aaaaaa";

	ft_striteri(str, &func);
	printf("%s\n", str);
}
*/