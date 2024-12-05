/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:51 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/05 15:23:27 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_find_newline(char *str)
{
	if (str)
	{
		while (*str)
		{
			if (*str == '\n')
				return (1);
			str++;
		}
	}
	return (0);
}

char	*ft_line_join(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	i = -1;
	j = -1;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	if (s1)
	{
		while (s1[++i])
			result[i] = s1[i];
	}
	else
		i = 0;
	if (s2)
	{
		while (s2[++j])
			result[i + j] = s2[j];
	}
	else
		j = 0;
	result[i + j] = '\0';
	if (s1)
		free(s1);
	return (result);
}

/* If an error */
int	ft_display_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
	return (-1);
}