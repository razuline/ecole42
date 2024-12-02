/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razuline <razuline@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:07:02 by erazumov          #+#    #+#             */
/*   Updated: 2024/12/02 16:49:56 by razuline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(const char *str)
{
	int		len;

	len = 0;
	if (str == NULL)
		ft_putstr("(null)");
		return (6);
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	*str;

	str = "Hello";
	ft_putstr(str);
	return (0);
}
*/