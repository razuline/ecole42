/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:37:05 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/06 17:38:19 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <ctype.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);

int		ft_display_error(char *str);
int		ft_find_newline(char *str);
size_t	ft_strlen(char *str);
char	*ft_line_join(char const *s1, char const *s2);
char	*ft_trim_rem(char *str);
char	*ft_get_line(char *str);

#endif
