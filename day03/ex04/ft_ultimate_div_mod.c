/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:43:05 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/09 14:34:28 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp1;
	int tmp2;

	tmp1 = (*a) / (*b);
	tmp2 = (*a) % (*b);
	*a = tmp1;
	*b = tmp2;
}

/*
**int		main(void)
**{
**	int *a;
**	int *b;
**	int c;
**	int d;
**
**	a = &c;
**	b = &d;
**	scanf("%d %d", &c, &d);
**	ft_ultimate_div_mod(a, b);
**	printf("%d %d", *a, *b);
**	return (0);
**}
*/
