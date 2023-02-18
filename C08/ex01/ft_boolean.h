/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebensim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:56:09 by lebensim          #+#    #+#             */
/*   Updated: 2022/07/21 21:34:27 by lebensim         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define SUCCESS 0
# define FALSE 0
# define EVEN(nbr) (nbr % 2)
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments"

typedef int	t_bool;

#endif
