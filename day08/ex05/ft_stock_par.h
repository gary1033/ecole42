/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:35:59 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/16 15:37:50 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
#define FT_STOCK_PAR_H
#include <stdlib.h>
char	**ft_split_whitespaces(char *str);
char	*stdrup(char *str);
typedef struct s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
}				t_stock_par;
#endif
