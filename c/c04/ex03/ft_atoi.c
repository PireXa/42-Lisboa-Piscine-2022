/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:04:39 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/25 15:44:53 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minuscount;
	int	nb;

	i = 0;
	nb = 0;
	minuscount = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			minuscount++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if ((minuscount % 2) != 0)
		nb = -nb;
	return (nb);
}

int main()
{
	char *str = " ---+--+1234ab567";
	ft_atoi(str);
}
