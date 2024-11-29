/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:16:37 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/29 15:45:23 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <ctype.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

int		ft_format(const char *format, va_list args);
int		ft_print_char(char c);
int		ft_print_str(const char *str);
int		ft_print_nbr(int n, int *len);
int		ft_print_u(unsigned int n, int *len);
int		ft_print_base16(unsigned int nb, char Xx, int *len);
void	ft_putchar(char c, int *len);

#endif