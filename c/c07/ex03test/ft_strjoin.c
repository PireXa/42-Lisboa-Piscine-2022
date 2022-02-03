/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:49:54 by fde-albe          #+#    #+#             */
/*   Updated: 2022/02/01 16:47:52 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	totalsize(int size, char **strs, int sepsize)
{
	int	i;
	int	a;
	int	tsize;

	tsize = 0;
	i = 0;
	a = 0;
	while (i < size)
	{
		if (i < size - 1)
			tsize = ft_strlen(strs[i]) + sepsize;
		else
			tsize = ft_strlen(strs[i]) + 1;
		i++;
	}
	return (tsize);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tsize;
	int		sepsize;
	char	*bigstring;
	int		i;

	i = 0;
	sepsize = ft_strlen(sep);
	tsize = totalsize(size, strs, sepsize);
	bigstring = (char *)malloc(tsize * sizeof(char) + 1);
	while (i < size)
	{
		bigstring = ft_strcat(bigstring, strs[i]);
		if (i < size - 1)
			bigstring = ft_strcat(bigstring, sep);
		i++;
	}
	return (bigstring);
}

int main()
{
	int size = 3;
	char **strs = NULL;
	strs = (char**)malloc(3 * sizeof(strs));
	strs[0] = "123";
	strs[1] = "456";
	strs[2] = "789";
	char *sep = "0";
	printf(" %s\n", ft_strjoin(size, strs, sep));
	free(strs);
}
