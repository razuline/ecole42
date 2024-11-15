/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:19:04 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/14 14:30:28 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_memcmp(void *s1, void *s2, size_t len)
{
	char	*n_s1;
	char	*n_s2;
	size_t	i;

	n_s1 = (char *)s1;
	n_s2 = (char *)s2;
	i = 0;
	while (i < len)
	{
		if (n_s1[i] != n_s2[i])
			return (n_s1[i] - n_s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	first_str[] = "zfz";
	char	second_str[] = "zfz";
	int	result;
	
	result = ft_memcmp(first_str, second_str, 4);
	if (result == 0)
		write (1, "Strings are equal\n", 18);
	else if (result > 0)
		write (1, "1st str is greater than 2nd str\n", 33);
	else
		write (1, "1st str is less than 2nd str\n", 31);
	return (0);
}
*/