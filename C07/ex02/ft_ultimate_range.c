/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:02:04 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/22 02:31:43 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	i2;

	size = (max - min) - 1;
	i = min;
	i2 = 0;
	if (size < 0)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL || i >= max)
		return (-1);
	while (i2 <= size)
	{
		(*range)[i2] = i;
		i++;
		i2++;
	}
	return (size + 1);
}
