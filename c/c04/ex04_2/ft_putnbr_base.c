/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:01:10 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/23 11:05:21 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
	{
		write(1, &c, 1);
	}

int	ft_size_test(char *base, int i)
{
	while (base[i] != '\0')
		i++;
	if (i < 2)
		return (0);
	return (i);
}

int	ft_search_signal(char *base, int i)
{
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	ft_search_equal(char *base, int i, int count, int b)
{
	while (i < count - 1)
	{
		if (base[i] == base[b])
			break;
		else
		{
			if (b < 5)
				b++;
			else
			{
				i++;
				b = i + 1;
			}
		}
	}
	if (i < count - 1)
		return (0);
	return (1);
}

void	ft_write_nbr(int nbr, char *base, int count)
{
	if (nbr == INT_MIN)
	{
		ft_write_nbr(nbr / count, base, count);
		write(1, &(base[-(nbr % count)]), 1);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_write_nbr(-nbr, base, count);
	}
	else if (nbr >= count)
	{
		ft_write_nbr((nbr / count), base, count);
		//ft_write_nbr((nbr % 5), base, count);
	}
	write(1, &(base[nbr % count]), 1);
	//else 
	//{
		//ft_putchar(base[nbr]);
	//}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int b;
	int count;

	i = 0;
	b = 1;
	ft_size_test(base, i);
	count = ft_size_test(base, i);
	printf(" count = %d\n", count);
	i = 0;
	ft_search_signal(base, i);
	i = 0;	
	ft_search_equal(base, i, count, b);

	printf(" ft_search_signal = %d\n", ft_search_signal(base, i));
	printf(" ft_search_equal = %d\n", ft_search_equal(base, i, count, b));
	
	if ((ft_size_test(base, i) != 0) &&
		(ft_search_signal(base, i) != 0) &&
		(ft_search_equal(base, i, count, b) != 0))
		ft_write_nbr(nbr, base, count);
}

int main()
{
	char *base = {"01"};
	int nbr = 3434325;
	ft_putnbr_base(nbr, base);
}
