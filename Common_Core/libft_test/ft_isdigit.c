/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:12:49 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/10 12:54:18 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isdigit(char *str)
{
	int	i;
	int	bool;

	i = 0;
	bool = 0;
	if (str[i] == '\0')
		bool = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			bool = 1;
		else
			return (0);
		i++;
	}
	return (bool);
}
/*
int main(void)
{
	char s[] = "123abc456";

	if (ft_isdigit(s) == 1)
		write(1, "Only digits", 11);
	else
		write(1, "Other characters", 17);
	return (0);
}
*/