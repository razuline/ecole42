/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:51 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/06 14:46:16 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* If an error */
int	ft_display_error(char *str)
{
	if (str)
		free(str);
	return (-1);
}

/* Count a length of a string */
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* Look for a new line character (\n) */
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

/* Concatenate lines */
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

/* Remove the blank space character from the beginning and end of a string */
char	*ft_trim_rem(char *str)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!str)
		return (NULL);
	while (str[x] != '\n' && str[x] != '\0')
		x++;
	if (str[x] == '\0')
	{
		free(str);
		return (NULL);
	}
	x++;
	while (str[x + y])
	{
		str[y] = str[x + y];
		y++;
	}
	str[y] = '\0';
	return (str);
}

/* Get a new line from file */
char	*ft_get_line(char *str)
{
	size_t	i;
	size_t	j;
	char	*line;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	line = (char *)malloc(i + 1);
	if (!line)
		return (NULL);
	j = 0;
	while (str[j] != '\n' && str[j] != '\0')
	{
		line[j] = str[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}
