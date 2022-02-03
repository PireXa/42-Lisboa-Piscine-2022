/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:33:24 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/26 10:33:58 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_iterative_power(int nb, int power)
{
	int	val;

	val = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		nb = 1;
	while (power > 1 && nb >= INT_MIN && nb <= INT_MAX)
	{
		nb = nb * val;
		power--;
	}
	return (nb);
}
