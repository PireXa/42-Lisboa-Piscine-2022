/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:56:33 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/24 16:03:47 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_horse(int lin, int col)


int ft_ten_queens_puzzle(void)
{
	//int tab[10][10];
	int i;
	int a;
	int queen;

	i = 0;
	a = 0;
	queen = 0;
	while(i < 10)
	{
		write(1, &i, 1);
		while (a < 10 && queen++ <= 10)
		{
			a = a + 2;
			write(1, &a, 1);
		}

	}
}
