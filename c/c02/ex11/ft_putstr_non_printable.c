/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 10:13:47 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/20 09:33:39 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	letter;

	i = 0;
	while (str[i] != '\0')
	{
		letter = str[i];
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			ft_putchar("01"[letter / 16]);
			ft_putchar("0123456789abcdef"[letter % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
