/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:10:42 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/16 15:53:22 by erazumov         ###   ########.fr       */
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
void	*ft_memset(void *dest, int c, size_t len); /* Fill memory with a constant byte */
void	ft_bzero(void *dest, size_t len); /* Zero a byte string */
void	*ft_memcpy(void *dest, void *src, size_t n); /* Copy memory area */
void	*ft_memmove(void *dest, void *src, size_t len); /* Copy memory area */
size_t	ft_strlcpy(char *dest, char *src, size_t size); /* Size-bounded string copying */
int		ft_strlcat(char *dest, char *src, int size); /* Size-bounded string concatenation */
char	*ft_toupper(char *str); /* Lowercase to uppercase letter conversion*/
char	*ft_tolower(char *str); /* Uppercase to lowercase letter conversion*/
char	*ft_strchr(const char *s, int c); /* Locate character in string (first occurence) */
char	*ft_strrchr(const char *s, int c); /* Locate character in string (last occurence) */
int		ft_strncmp(char *s1, char *s2, size_t n); /* Compare strings (size-bounded) */
void	*ft_memchr(void *s, int c, size_t len); /* Scan memory for a character */
int		ft_memcmp(void *s1, void *s2, size_t len); /* Compare memory areas */
char	*ft_strnstr(char *big, char *little, int len); /* Locate a substring in a string (size-bounded) */
int		ft_atoi(char *str); /* Convert ASCII string to integer */
void	*ft_calloc(size_t nmemb, size_t size); /* Memory allocation */
char	*ft_strdup(char *src); /* Save a copy of a string (with malloc) */

/* Additional Functions */

char	*ft_substr(char *s, int start, int len); /* Allocate and return a substring */
char	*ft_strjoin(char *s1, char *s2); /* Allocate and return a new string */
char	*ft_strtrim(char *s1, char *s2); /* Allocate and return a copy of string */
char	**ft_split(char *str, char sep); /* Allocate and return an array of strings */
char	*ft_itoa(int num); /* Return a string representing the integer */
char	*ft_strmapi(char *s, char (*f)(unsigned int, char)); /* Create a new string */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int nb, int fd);

/* Bonus Part */

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
