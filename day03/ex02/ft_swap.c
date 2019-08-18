/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:28:29 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/09 14:35:19 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
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
**	printf("%p %p\n", a, b);
**	ft_swap(a, b);
**	printf("%p  %p", a, b);
**	return (0);
**}
*/
