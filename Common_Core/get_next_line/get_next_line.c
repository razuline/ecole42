/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/16 19:24:48 by erazumov         ###   ########.fr       */
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
	char	*buff;
	int		bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (ft_if_error(remainder));
	bytes = 1;
	while (!ft_str_chr(remainder, '\n') && bytes != 0)
	{
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buff);
			return (ft_if_error(remainder));
		}
		buff[bytes] = '\0';
		remainder = ft_str_join(remainder, buff);
	}
	free(buff);
	return (remainder);
}

char	*ft_get_line(char *remainder)
{
	int		i;
	char	*line;

	if (!remainder)
		return (ft_if_error(remainder));
	i = 0;
	while (remainder[i] && remainder[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if(!line)
		return (ft_if_error(line));
	i = 0;
	while (remainder[i] && remainder[i] != '\n')
	{
		line[i] = remainder[i];
		i++;
	}
	if (remainder[i] == '\n')
	{
		line[i] = remainder[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_cut_line(char *remainder)
{
	int		i;
	int		j;
	char	*new_remainder;

	if (!remainder)
		return (ft_if_error(remainder));
	i = 0;
	while (remainder[i] && remainder[i] != '\n')
		i++;
	new_remainder = (char *)malloc(sizeof(char) * (ft_strlen(remainder) - i + 1));
	if (!new_remainder)
		return (ft_if_error(new_remainder));
	j = 0;
	while (remainder[i])
		new_remainder[j++] = remainder[i++];
	new_remainder[j] = '\0';
	free(ft_if_error(remainder));
	return (new_remainder);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char *remainder;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	remainder = ft_read(fd, remainder);
	line = ft_get_line(remainder);
	remainder = ft_cut_line(remainder);
	return (line);
}

int	main(int argc, char const *argv[])
{
	int		fd;
	int		count;
	char	*line;

	if (argc != 2)
		return (-1);
	fd = open(argv[1], O_RDONLY);
	count = 19;
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		count--;
	}
	free(line);
	close(fd);
	return (0);
}

#include <fcntl.h>
#include <stdio.h>

// int	main(int argc, char const *argv[])
// {
// 	int		fd;
// 	int		count;
// 	char	*line;

// 	if (argc != 2)
// 		return (-1);
// 	fd = open(argv[1], O_RDONLY);
// 	count = 19;
// 	while (count > 0)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line);
// 		count--;
// 	}
// 	close(fd);
// 	return (0);
// }
