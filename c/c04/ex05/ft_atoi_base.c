/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:36:07 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/25 10:24:34 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	basequal(char *base, int i, int count)
while (i < count - 1)
	{
		if (base[i] == base[b])
			break ;
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


int	basel(char *base)
{
	int i;

	i = 0;
	while(base[i] != '\0')
		i++;
	return (i);
}

int ft_atoi_base(char *str, char *base)
{
	int i;
	int minuscount;
	int nb;
	int count;

	i = 0
	minuscount = 0;
	if (basel(base) < 2)
		return 0;
	count = basel(base);
	i = 0;
	if (basequal(base) == 0)
		return 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;	
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			minuscount++;
		i++;
	}
	
}
