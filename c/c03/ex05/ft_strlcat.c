/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:54:24 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/31 16:54:46 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	c;

	i = 0;
	a = 0;
	c = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
		a++;
	if (size <= i)
		a = a + size;
	else
		a = a + i;
	while (src[c] != '\0' && (c + i + 1) < size)
	{
		dest[c + i] = src[c];
		c++;
	}
	dest[c + i] = '\0';
	return (a);
}
