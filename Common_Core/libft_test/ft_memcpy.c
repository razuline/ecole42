/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:15:02 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/12 18:11:24 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char	*n_dest;
	char	*n_src;
	size_t	i;

	n_dest = (char *)dest;
	n_src = (char *)src;
	i = 0;
	while (i < n)
	{
		n_dest[i] = n_src[i];
		i++;
	}
}

int	main(void)
{
	
}