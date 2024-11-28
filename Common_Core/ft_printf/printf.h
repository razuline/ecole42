/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:16:37 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 20:35:30 by erazumov         ###   ########.fr       */
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

int		ft_print_char(char c);
int		ft_print_str(const char *str);
void	ft_putchar(char c);

#endif