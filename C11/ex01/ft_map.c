/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:56:06 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/22 17:59:24 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_map(int *tab, int lenght, int (*f)(int))
{
	int	i;
	int	*tab2;

	i = 0;
	tab2 = malloc(sizeof(int) * lenght);
	if (tab2 == NULL)
		return (NULL);
	while (i < lenght)
	{
		tab2[i] = f(tab);
		i++;
	}
	return (tab2);
}
