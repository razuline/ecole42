/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:36:23 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/13 17:48:25 by erazumov         ###   ########.fr       */
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
	int			bytes;
	char		*line;
	static char *remainder;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes = 1;
	while (bytes != 0)
	{
		bytes = read(fd, , BUFFER_SIZE);
		if (bytes == -1)
		{
			remainder = NULL;
			free(remainder);
		}
	}


	return (line);
}