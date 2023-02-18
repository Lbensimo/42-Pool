/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:54:14 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/20 15:37:07 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_f_base(char *base, char c);

int	ft_strlen(char *str);

int	ft_check_base(char *base);

int	ft_is_neg(char *str, int i);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	res;

	i = 0;
	res = 0;
	if (ft_check_base(base) == 1)
		return (0);
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	neg = ft_is_neg(str, i);
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_f_base(base, str[i]) != -1)
	{
		res = res * ft_strlen(base) + ft_f_base(base, str[i]);
		i++;
	}
	if (neg % 2 != 0)
		return (res * -1);
	return (res);
}

int	ft_lenint(long nb, char *base)
{
	int	size;

	size = 0;
	if (nb < 0)
	{
		nb *= -1;
		size++;
	}
	while (nb >= ft_strlen(base))
	{
		nb = nb / ft_strlen(base);
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa_base(int nb, char *base)
{
	char	*dest;
	long	nbr;
	int		size;
	int		i;

	nbr = nb;
	size = ft_lenint(nbr, base) + 1;
	i = size - 1;
	dest = (char *)malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	if (nb < 0)
	{
		nbr *= -1;
		dest[0] = '-';
	}
	while (i >= 0 && dest[i - 1] != '-')
	{
		dest[i - 1] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		i--;
	}
	dest[size - 1] = '\0';
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	char	*ddest;
	int		i;

	i = 0;
	while (nbr[i] == ' ' || nbr[i] == '\f' || nbr[i] == '\n'
		|| nbr[i] == '\r'
		|| nbr[i] == '\t' || nbr[i] == '\v'
		|| nbr[i] == '-' || nbr[i] == '+')
		i++;
	if (ft_check_base(base_from) == 1 || ft_check_base(base_to) == 1)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	ddest = ft_itoa_base(n, base_to);
	if (ft_f_base(base_from, nbr[i]) == -1)
	{
		ddest[0] = '0';
		ddest[1] = '\0';
	}
	return (ddest);
}
