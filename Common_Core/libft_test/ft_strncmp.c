/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:18:19 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/24 17:13:07 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "test\200";
	char	str2[] = "test\0";
	int	result;

	result = ft_strncmp(str1, str2, 6);

	if (result == 0)
		write (1, "Strings are equal\n", 18);
	else if (result > 0)
		write (1, "1st str is greater than 2nd str\n", 32);
	else
		write (1, "1st str is less than 2nd str\n", 29);
	printf("%d\n", result);
	printf("%d\n", strncmp(str1, str2, 6));
	return (0);
}*/
