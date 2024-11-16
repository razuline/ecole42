/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:19:16 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/16 14:14:12 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int	count;
	int	start;
	int	end;

	if (to_find[0] == '\0')
		return ((char *)str);
	count = 0;
	while (str[count] && len > 0)
	{
		if (len < ft_strlen(to_find))
			return (NULL);
		start = 0;
		end = count;
		while (str[end] == to_find[start] && str[end] && to_find[start])
		{
			start++;
			end++;
		}
		if (to_find[start] == '\0')
			return ((char *)str + count);
		len--;
		count++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char mon_str[] = "Je suis a Paris";
	char find[] = "suis";
	char *result = ft_strnstr(mon_str, find, 5);
	
	if (result == NULL)
		write (1, "String found\n", 13);
	else
		write (1, "String not found\n", 17);
	return (0);
}
*/