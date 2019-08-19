/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 00:18:46 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/08 19:35:37 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/*
**void	ft_putchar(char c)
**{
**	printf("%c",c);
**}
*/

void	ft_putnbr(int nb)
{
	long int sub;

	sub = nb;
	if (sub < 0)
	{
		sub = sub * -1;
		ft_putchar('-');
	}
	if (sub > 0)
	{
		if (sub > 9)
		{
			ft_putnbr(sub / 10);
		}
		ft_putchar(sub % 10 + '0');
	}
}

/*
**int main(void)
**{
**	int n;
**
**	scanf("%d", &n);
**	ft_putnbr(n);
**	return 0;
**}
*/
