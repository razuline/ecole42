/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/04 17:59:48 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that returns a line read from a
file descriptor.
fd: The file descriptor to read from.
Return value:
Read line: correct behavior; NULL: there is nothing else to read, or an error
occurred. */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	
}

#include "stdio.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*line;

	if (ac < 2)
	{
		printf("File %s is empty\n", av[1]);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			return (NULL);
		printf("%s\n", line);
		free(line);
	}
	close(fd);
	return (0);
}