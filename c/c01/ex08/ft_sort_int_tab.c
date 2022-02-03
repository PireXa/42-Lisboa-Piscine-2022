/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:57:04 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/20 12:23:52 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	b;
	int	swap;
	int	a;

	b = 0;
	while (b < size)
	{
		a = b;
		if (tab[a] > tab [a + 1])
		{
			while (tab[a] > tab[a + 1])
			{
				swap = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = swap;
				a++;
			}
			b = 0;
		}
		else
		{
			b++;
		}
	}
}

int main()
{
	int size = 5;
	int *tab;
	tab[0] = 44;
	tab[1] = -66;
	tab[2] = 0;
	tab[3] = 12;
	tab[4] = -4;	
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < 5 ; i++)
		printf("%d, ", tab[i]);
}
