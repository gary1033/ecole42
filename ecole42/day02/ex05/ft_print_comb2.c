/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 23:09:54 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/08 16:41:24 by ruchang          ###   ########.fr       */
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

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = -1;
	a[1] = -1;
	while (a[0]++ < 99)
	{
		while (a[1]++ < 99)
		{
			if (a[0] < a[1])
			{
				ft_putchar(a[0] / 10 + '0');
				ft_putchar(a[0] % 10 + '0');
				ft_putchar(' ');
				ft_putchar(a[1] / 10 + '0');
				ft_putchar(a[1] % 10 + '0');
				if (a[0] < 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		a[1] = a[0];
	}
}

/*
**int main(void)
**{
**	ft_print_comb2();
**	return (0);
**}
*/
