/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:18:39 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/14 14:20:08 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(void *s, int c, size_t len)
{
	char	*n_s;
	char	n_c;
	size_t	i;

	n_s = (char *)s;
	n_c = (char)c;
	i = 0;
	while (i < len)
	{
		if (n_c == n_s[i])
			return (n_s + i);
		i++;
	}
	return (NULL);
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
	if (ft_memchr(str, ch, 2) != 0)
		ft_putstr("Character is found.\n");
	else
		ft_putstr("Character is not found.\n");
	return (0);
}
*/