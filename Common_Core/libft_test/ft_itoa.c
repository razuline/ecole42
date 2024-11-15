/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erazumov <erazumov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:49:22 by erazumov          #+#    #+#             */
/*   Updated: 2024/11/15 15:40:28 by erazumov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int nb)
{
	int	len;
	
	if (nb == -2147483648)
	{
		len = 11;
		return (len);
	}
	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	if (nb <= 10)
		len++;
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_inttostr(int nbr, int len)
{
	
}

char	*ft_itoa(int num)
{
	char	*str;
	
	str = (char *)malloc(sizeof(char) * (ft_intlen(num) + 1));
	if (str == NULL)
		return (NULL);
	if (!num)
		return (str = '\0');
}

#include <stdio.h>

int	main(void)
{
	int	i;
	int	res;

	i = -10;
	res = ft_intlen(i);
	printf("%d\n", res);
	return(0);
}