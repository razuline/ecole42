/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:15:18 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/26 14:37:37 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memmove() function  copies n bytes from memory area src to memory
area dest. The memory areas may overlap: copying takes place as though
the bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from the temporary
array to dest.
The memmove() function returns a pointer to dest. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
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