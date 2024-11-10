/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:10:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/10 16:31:59 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

/* Mandatory Part */

int	ft_isalpha(int c); /* Alphabethic character test */
int	ft_isdigit(int c); /* Decimal-digit character test */
int ft_isalnum(int c); /* Alphanumeric character test */
int	ft_isascii(int c); /* Test for ASCII character */
int	ft_isprint(int c); /* Printing character test (space character inclusive) */
int	ft_strlen(char *str); /* Find length of a string */
/*ft_memset();
ft_bzero();
ft_memcpy();
ft_memmove();
ft_strlcpy();
ft_strlcat();*/
char	*ft_toupper(char *str); /* Lowercase to uppercase letter conversion*/
char	*ft_tolower(char *str); /* Uppercase to lowercase letter conversion*/
/*ft_strchr();
ft_strrchr();
ft_strncmp();
ft_memchr();
ft_memcmp();
ft_strnstr();*/
int	ft_atoi(char *str); /* Convert ASCII string to integer */
/*ft_calloc();
ft_strdup();*/


#endif
