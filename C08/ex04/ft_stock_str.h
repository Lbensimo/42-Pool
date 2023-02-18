/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:59:46 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/22 15:16:27 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;
