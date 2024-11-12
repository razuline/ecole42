/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:10:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/12 17:31:40 by erazumov         ###   ########.fr       */
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

int		ft_isalpha(int c); /* Alphabethic character test */
int		ft_isdigit(int c); /* Decimal-digit character test */
int		ft_isalnum(int c); /* Alphanumeric character test */
int		ft_isascii(int c); /* Test for ASCII character */
int		ft_isprint(int c); /* Printing character test (space character inclusive) */
int		ft_strlen(char *str); /* Find length of a string */
void	*ft_memset(void *s, int c, size_t n); /* Fill memory with a constant byte */
void	ft_bzero(void *s, size_t n); /* Zero a byte string */
void	*ft_memcpy(void *dest, void *src, size_t n); /* Copy memory area */
void	*ft_memmove(void *dest, void *src, size_t n); /* Copy memory area */
size_t	ft_strlcpy(char *dest, char *src, size_t size); /* Size-bounded string copying */
size_t	ft_strlcat(char *dest, char *src, size_t size); /* Size-bounded string concatenation */
char	*ft_toupper(char *str); /* Lowercase to uppercase letter conversion*/
char	*ft_tolower(char *str); /* Uppercase to lowercase letter conversion*/
char	*ft_strchr(const char *s, int c); /* Locate character in string (first occurence) */
char	*ft_strrchr(const char *s, int c); /* Locate character in string (last occurence) */
int		ft_strncmp(char *s1, char *s2, size_t n); /* Compare strings (size-bounded) */
void	*ft_memchr(void *s, int c, size_t n); /* Scan memory for a character */
int		ft_memcmp(void *s1, void *s2, size_t n); /* Compare memory areas */
char	*ft_strnstr(char *big, char *little, size_t len); /* Locate a substring in a string (size-bounded) */
int		ft_atoi(char *str); /* Convert ASCII string to integer */
void	*ft_calloc(size_t nmemb, size_t size); /* Memory allocation */
char	*ft_strdup(char *src); /* Save a copy of a string (with malloc) */

#endif
