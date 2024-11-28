/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:07:02 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/28 13:52:25 by erazumov         ###   ########.fr       */
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

	i = 0;
	while (ft_ifnostr != 0 && str[i] != '\0')
	{
		write(1, *str, i++);
	}
}

int	main(int ac, char **av)
{
	char	*str = av[1];

	if (ac > 1)
	{
		
	}
}