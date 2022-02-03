/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:50:12 by fde-albe          #+#    #+#             */
/*   Updated: 2022/02/01 16:30:21 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		array = (int *)malloc((max - min) * sizeof(int));
		while (min < max)
		{
			array[i] = min++;
			i++;
		}
		return (array);
	}
}
