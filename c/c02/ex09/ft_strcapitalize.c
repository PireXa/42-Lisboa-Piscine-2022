/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:55:17 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/19 15:55:47 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	test;

	test = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 48 && str[i] <= 57))
		{
			if (test && str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			else if (!test && str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
			test = 0;
		}
		else
			test = 1;
		i++;
	}
	return (str);
}
