/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 20:56:11 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/08 20:03:39 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*
**void	ft_putchar(char c)
**{
**	printf("%c", c);
**}
*/

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0' - 1;
	while (a[0]++ < '7')
	{
		a[1] = a[0];
		while (a[1]++ < '8')
		{
			a[2] = a[1];
			while (a[2]++ < '9')
			{
				ft_putchar(a[0]);
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				if (a[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
