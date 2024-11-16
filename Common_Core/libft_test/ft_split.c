/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:43:06 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/16 16:51:01 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of strings obtained 
by splitting ’s’ using the character ’c’ as a delimiter. The array must end 
with a NULL pointer.
str: The string to be split.
sep: The delimiter character.
Returns the array of new strings resulting from the split or NULL if 
the allocation fails.*/

#include "libft.h"

static int	ft_is_space(char to_find, char *str)
{
	while (*str)
	{
		if (to_find == *str++)
			return (1);
	}
	return (0);
}

static int	ft_wordcount(char *str, char *c)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
	{
		while (ft_is_space(*str, c))
			str++;
		if (*str && !(ft_is_space(*str, c)))
		{
			count++;
			while (*str && !(ft_is_space(*str, c)))
				str++;
		}
	}
	return (count);
}

static int	ft_wordlen(char *str, char *c)
{
	int	len;

	len = 0;
	while (str[len] && !(ft_is_space(str[len], c)))
		len++;
	return (len);
}

char	**ft_split(char *str, char sep)
{
	char    **split;
	int		i;

	i = 0;
	split = (char **)malloc((sizeof(char *) * ft_wordcount(str, sep) + 1));
	if (!str || !split)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str == sep && *str)
			str++;
		if (*str)
		{
			if (!ft_strchr(str, sep))
				wordnbr = ft_strlen(str);
			else
				wordnbr = ft_strchr(str, sep) - str;
			split[i++] = ft_substr(str, 0, wordnbr);
			str += wordnbr;
		}
	}
	split[i] = NULL;
	return (split);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	c;
	char	**res;

	str = "C'estlavie.";
	c = ' ';
	res = ft_split(str, c);
	printf("%s\n", *res);
	return (0);
}
