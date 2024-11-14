/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:15:18 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/14 14:05:45 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dest, void *src, size_t len)
{
	char	*n_dest;
	char	*n_src;
	size_t	i;

	n_dest = (char *)dest;
	n_src = (char *)src;
	i = 0;
	if (n_dest > n_src)
	{
		while (i < len)
		{
			n_dest[len - 1] = n_src[len - 1];
			len--;
		}
	}	
	else
	{
		while (i < len)
		{
			n_dest[i] = n_src[i];
			i++;
		}
	}
	return (dest);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (!(*str == '\0'))
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char	src1[] = {"Salut!"};
	char	dst1[] = {"Bonjour!"};

	ft_putstr(src1);
	ft_putchar('\n');
	ft_putstr(dst1);
	ft_putchar('\n');
	ft_memmove(dst1, src1, 8);
	ft_putstr(dst1);
	ft_putchar('\n');
	return (0);
}
*/