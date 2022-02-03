/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:57:21 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/18 11:30:17 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swaper;
	int	i;

	i = 0;
	while (i < size)
	{
		swaper = tab[i];
		tab[i] = tab[size -1];
		tab[size - 1] = swaper;
		size--;
		i++;
	}
}
