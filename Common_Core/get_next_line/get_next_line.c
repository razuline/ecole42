/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/08 18:06:20 by erazumov         ###   ########.fr       */
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

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
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

int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	fd1 = open("example.txt", O_RDONLY);
	fd2 = open("text_HP.txt", O_RDONLY);
	fd3 = open("notext.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
