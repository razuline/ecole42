/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:10:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/10 13:27:03 by erazumov         ###   ########.fr       */
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

int	ft_isalpha(char *str); /* Alphabethic character test */
int	ft_isdigit(char *str); /* Decimal-digit character test */
/* ft_isalnum();
ft_isascii(); */
int	ft_isprint(char *str); /* Printing character test (space character inclusive) */
int	ft_strlen(char *str); /* Finds length of a string */
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
ft_strnstr();
ft_atoi();
ft_calloc();
ft_strdup();*/


#endif
