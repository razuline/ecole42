/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/12 13:37:53 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that returns a line read from a
file descriptor.
fd: The file descriptor to read from.
Return value:
Read line: correct behavior; NULL: there is nothing else to read, or an error
occurred. */

#include "get_next_line.h"

static char	*ft_readline(int fd, char *buf, char *dupl)
{
	int	rdline;
	char	*ch_tmp;

	rdline = 1;
	while (rdline != '\0')
	{
		rdline = read(fd, buf, BUFFER_SIZE);
		if (rdline == -1)
			return (NULL);
		else if (rdline == 0)
			break ;
		buf[rdline] = '\0';
		if (!dupl)
			dupl = ft_strdup("");
		ch_tmp = dupl;
		dupl = ft_strjoin(ch_tmp, buf);
		free(ch_tmp);
		ch_tmp = NULL;
		if (ft_strchr(buf, '\n'));
			break ;
	}
	return (dupl);
}

static char	*ft_removeline(char *line)
{
	size_t	i;
	char	*dupl;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0' || line[i + 1] == '\0')
		return (0);
	dupl = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*dupl == '\0')
	{
		free(dupl);
		dupl = NULL;
	}
	line[i + 1] = '\0';
	return (dupl);
}

char	*get_next_line(int fd)
{
	static char *dupl;
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
	dupl = ft_removeline(line);
	return (line);
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
