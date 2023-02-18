/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:31:26 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/19 13:07:04 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		i2;
	char	*dest;
	int		big_size;

	i = -1;
	i2 = -1;
	big_size = 0;
	while (++i2 < size)
	{
		big_size += (ft_strlen(strs[i2]));
		if (i2 < size - 1)
			big_size += ft_strlen(sep);
	}
	big_size++;
	dest = (char *)malloc(big_size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (++i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			dest = ft_strcat(dest, sep);
	}
	return (dest);
}
