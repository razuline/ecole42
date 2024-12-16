/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:51 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/16 19:13:06 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}

// char	*ft_str_join(char *remainder, char *buff)
// {
// 	int		i;
// 	int		j;
// 	char	*result;

// 	// if (!remainder || !buff)
// 	// 	return (ft_if_error(remainder));
// 	if (!remainder)
// 	{
// 		remainder = (char *)malloc(sizeof(char) * 1);
// 		remainder[0] = '\0';
// 	}
// 	if (!remainder)
// 		return (NULL);
// 	result = (char *)malloc(sizeof(char) * (ft_strlen(remainder) +
// 		ft_strlen(buff) + 1));
// 	if (!result)
// 		return (NULL);
// 	i = 0;
// 	while (remainder[i])
// 	{
// 		result[i] = remainder[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (buff[j] != '\0')
// 		result[i++] = buff[j++];
// 	result[i] = '\0';
// 	ft_if_error(remainder);
// 	return (result);
// }

char	*ft_str_join(char *remainder, char *buff)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!remainder)
	{
		remainder = (char *)malloc(1 * sizeof(char));
		remainder[0] = '\0';
	}
	if (!remainder || !buff)
		return (NULL);
	result = malloc(sizeof(char) * ((ft_strlen(remainder) + ft_strlen(buff)) + 1));
	if (result == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (remainder)
		while (remainder[++i] != '\0')
			result[i] = remainder[i];
	while (buff[j] != '\0')
		result[i++] = buff[j++];
	result[ft_strlen(remainder) + ft_strlen(buff)] = '\0';
	ft_if_error(remainder);
	return (result);
}

char	*ft_str_chr(char *s, int c)
{
	char	ch;

	if (!s)
		return (NULL);
	ch = c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

// char	*ft_str_chr(char *str, char ch)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == ch)
// 			return (&str[i]);
// 		i++;
// 	}
// 	if (ch == '\0')
// 		return (&str[i]);
// 	return (NULL);
// }
/*
#include <stdio.h>

int	main(void)
{
	char	*remainder;
	char	*result;

	remainder = "Hello, World!";
	result = ft_str_chr(remainder, 'a');
	printf("Result is %s.\n", result);
	return (0);
}
*/