/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:08:27 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/22 02:31:34 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;
	int	i;
	int	i2;

	size = (max - min) - 1;
	i = min;
	i2 = 0;
	if (size < 0)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc(size * sizeof(int));
	if (tab == NULL || i >= max)
		return (NULL);
	while (i2 <= size)
	{
		tab[i2] = i;
		i++;
		i2++;
	}
	return (tab);
}
