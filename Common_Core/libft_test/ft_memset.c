/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:14:38 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/14 14:43:05 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char	*tmp;

	tmp = (char *)dest;
	while (len > 0)
	{
		*tmp = (char)c;
		len--;
		tmp++;
	}
	return (dest);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write (1, str, i);
}

int	main(void)
{
	char dest1[] = "Hello, World";
	char c = 'S';

	ft_memset(dest1, c, 5);
	ft_putstr(dest1);
	return (0);
}
*/