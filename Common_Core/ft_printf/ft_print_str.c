/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:07:02 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/27 13:13:36 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

static int	ft_ifnostr(char *s)
{
	if (*s)
		return (1);
	return (0);
}

void	ft_print_str(char *str)
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		
	}
}