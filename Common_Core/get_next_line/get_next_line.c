/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/12 16:05:27 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that returns a line read from a
file descriptor.
fd: The file descriptor to read from.
Return value:
Read line: correct behavior; NULL: there is nothing else to read, or an error
occurred. */

#include "get_next_line.h"

static char	*ft_read(int fd, char *buff)
{
	int		nbytes;

	if (fd < 0)
	{
		free(buff);
		return (-1);
	}
	nbytes = read(fd, NULL, 0);
	if (nbytes == -1 || BUFFER_SIZE <= 0 || fd < 0)
	{
		free(buff);
		return (-1);
	}
	else
	{
		nbytes = read(fd, buff, BUFFER_SIZE);
		if (nbytes == 0)
		{
			free(buff);
			return (-1);
		}
		buff[nb_bytes] = '\0';
	}
	return (nb_bytes);
}

static char	*ft_getline(int fd)
{
	size_t	len;
	char	*buff;

	len = 0;
	if (!line[len])
		return (NULL);
	while (line[len] != '\n' && line[len] != '\0')
		len++;
	if (line[len] == '\0' || line[1] == '\0')
		return (0);
	dupl = ft_substr(line, len + 1, ft_strlen(line) - len);
	if (*dupl == '\0')
	{
		free(dupl);
		dupl = NULL;
	}
	line[len + 1] = '\0';
	return (dupl);
}

char	*get_next_line(int fd)
{
	static char	*dupl;
	char		*buf;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	line = ft_readline(fd, buf, dupl);
	free(buf);
	buf = NULL;
	if (!line)
		return (NULL);
	dupl = ft_getline(line);
	return (line);
}
/*
#include "stdio.h"

int	main(int ac, char const *av[])
{
	int		fd;
	int		count;
	char	*line;

	if (ac != 2)
		return (-1);
	fd = open(av[1], O_RDONLY);
	count = 17;
	while (count > 0 || line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
		free(line);
		count--;
	}
	close(fd);
	return (0);
}
*/