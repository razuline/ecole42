/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:12:32 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/10 12:50:15 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_isalpha(char *str)
{
	int	i;
	int	bool;

	i = 0;
	bool = 0;
	if (str[i] == '\0')
		bool = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	char	s[] = "";

	if (ft_isalpha(s) == 1)
		write (1, "Only alphabetical characters or 0", 34);
	else
		write (1, "Other characters", 17);
	return (0);
}
*/