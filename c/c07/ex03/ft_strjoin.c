/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:56:56 by fde-albe          #+#    #+#             */
/*   Updated: 2022/02/02 09:24:19 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

int	size_total(int size, char **strs, char *sep)
{
	int	sitot;
	int	nstr;

	nstr = 1;
	sitot = 0;
	while (nstr < size)
	{
		sitot += ft_strlen(strs[nstr]) + 1;
		nstr++;
	}
	sitot += ((ft_strlen(sep) + 1) * (size - 1));
	return (sitot);
}

char	*ft_strcpy(char *dest, char **src, int size, char *sep)
{
	int	i;
	int	j;
	int	s;
	int	d;

	i = 0;
	j = 0;
	d = 0;
	while (j < size)
	{
		while (s < ft_strlen(src[j]))
			dest[i++] = src[j][s++];
		if (!(j == size - 1))
			while (d < ft_strlen(sep))
				dest[i++] = sep[d++];
		j++;
		s = 0;
		d = 0;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	ret = malloc(size_total(size, strs, sep) * sizeof(char));
	return (ft_strcpy(ret, strs, size, sep));
}
/*int main()
{
	int s = 4;
	char *st[] = {"epa ya", "se calhar",
	   	"mais ou menos", "tipo 6"};
	char *sep = ", ";
	printf("%s", ft_strjoin(s, st, sep));
	return 0;
}*/
