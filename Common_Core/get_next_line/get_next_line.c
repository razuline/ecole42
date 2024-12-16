/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/16 14:48:23 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that returns a line read from a
file descriptor.
fd: The file descriptor to read from.
Return value:
Read line: correct behavior; NULL: there is nothing else to read, or an error
occurred. */

#include "get_next_line.h"

char	*ft_if_error(char *remainder)
{
	free(remainder);
	remainder = NULL;
	return (NULL);
}

char	*ft_read(int fd, char *remainder)
{
	int		bytes;
	char	*buff;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	bytes = 1;
	while (bytes != 0 && !ft_str_chr(remainder, '\n'))
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			buff = NULL;
			free(buff);
		}
		buff[BUFFER_SIZE] = '\0';
		remainder = ft_str_join(remainder, buff);
	}
	return (remainder);
}

char	*copy_remainder(char *remainder)
{
	int		i;
	char	*line;

	if (!remainder)
		return (ft_if_error(remainder));
	while (remainder[i] && remainder[i] != '\n')
	{
		
	}	
	line = (char *)malloc(sizeof(char) * (ft_strlen(remainder) + 2));
	if(!line)
		return (ft_if_error(line));
	i = 0;
	
}

char	*get_next_line(int fd)
{
	char		*line;
	static char *remainder;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	


	return (line);
}