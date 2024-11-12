/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:15:43 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/12 17:59:37 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t	ft_strlcat(const char *dest, const *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (dest_len + i < size - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (total_len);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

int	main(void)
{
	char	dest1[] = "Hello, ";
	char	src1[] = "World!";

	ft_putstr(ft_strlcat(dest1, src1, 7));
	write (1, "\n", 1);
	return (0);
}
