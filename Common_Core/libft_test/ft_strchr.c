/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:17:49 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/12 14:32:42 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char	*str;
	char	ch;

	str = "Hello";
	ch = 'E';

	ft_putstr(str);
	ft_putchar('\n');
	if (ft_strchr(str, ch) != 0)
		ft_putstr("Character is found.\n");
	else
		ft_putstr("Character is not found.\n");
	return (0);
}
*/