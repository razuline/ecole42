/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razuline <razuline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:18:19 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/15 20:54:45 by razuline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && j < n)
	{
		i++;
		j++;
	}
	if (j == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	str1[] = "akash";
	char	str2[] = "akash";
	int	result;

	result = ft_strncmp(str1, str2, 4);

	if (result == 0)
		write (1, "Strings are equal\n", 18);
	else if (result > 0)
		write (1, "1st str is greater than 2nd str\n", 33);
	else
		write (1, "1st str is less than 2nd str\n", 31);
	return (0);
}
*/