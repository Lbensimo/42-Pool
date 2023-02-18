/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:54:54 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/19 18:01:52 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_f_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
		if (base[i] == '\0')
			return (-1);
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s])
		s++;
	return (s);
}

int	ft_check_base(char *base)
{
	int	i;
	int	i2;

	i = 0;
	while (base[i] != '\0')
	{
		if (i < ft_strlen(base) - 1)
			i2 = i + 1;
		while (base[i2] != '\0')
		{
			if (base[i] == base[i2])
				return (1);
			i2++;
		}
		if (base[i] == ' ' || base[i] == '\f' || base[i] == '\n'
			|| base[i] == '\r'
			|| base[i] == '\t' || base[i] == '\v')
			return (1);
		if (base[i] == '-' || base[i] == '+')
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_is_neg(char *str, int i)
{
	int	neg;

	neg = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg++;
			i++;
		}
		else
			i++;
	}
	return (neg % 2);
}
