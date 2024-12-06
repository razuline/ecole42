/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/06 17:44:25 by erazumov         ###   ########.fr       */
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
	static char *remove;
	char		*buffer;
	char		*line;
	int			rd_lines;

	if (fd < 0 || BUFFER_SIZE < 1 || !line)
		return (-1);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (ft_display_error(remove));
	rd_lines = 1;
	while (ft_find_newline(remove) && fd > 0)
	{
		rd_lines = read(fd, buffer, BUFFER_SIZE);
		if (rd_lines < 0)
			return (ft_display_error(remove));
		buffer[rd_lines] = '\0';
		remove = ft_line_join(remove, buffer);
	}
	free(buffer);
	line = ft_get_line(line);
	remove = ft_trim_rem(remove);
	if (rd_lines == 0 && !remove)
		return (0);
	return (1);
}

#include "stdio.h"

int	main(int ac, char **av)
{
	int		fd;
	int		rd;
	char	*line;

	if (ac < 2)
	{
		printf("File %s is empty\n", av[1]);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	line = NULL;	
	while ((rd = get_next_line(fd) > 0)
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