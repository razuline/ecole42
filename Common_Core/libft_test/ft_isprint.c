/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:14:10 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/10 13:06:33 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isprint(char *str)
{
	int	i;
	int	bool;

	i = 0;
	bool = 0;
	if (str[i] == '\0')
		bool = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
			bool = 1;
		else
			return (0);
		i++;
	}
	return (bool);
}
/*
int	main(void)
{
	char	s[] = {"   asjdgg"};
	
	if (ft_isprint(s) == 1)
		write (1, "Printable", 10);
	else
		write (1, "Other characters", 17);
	return (0);
}
*/