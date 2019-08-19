/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 00:18:46 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/09 13:22:37 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	printf("%c", c);
}


void	cycle(int *num, int lev, int n)
{
	int a[2];

	a[0] = num[lev];
	while (a[0] < 10)
	{
		num[lev] = a[0]++;
		if ((num[lev] > num[lev - 1]) && lev <= n)
		{
			cycle(num, lev + 1, n);
		}
		if (lev == n && (num[lev] > num[lev - 1]))
		{
			a[1] = 0;
			while (a[1] <= n)
			{
				ft_putchar(num[(a[1])++] + '0');
			}
			if (num[0] < 10 - n - 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		num[lev + 1] = num[lev];
	}
}

void	spectial(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(i + '0');
		if (i < 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	int num[11];
	int i;
	int j;

	j = 0;
	num[0] = 0;
	if (n == 1)
	{
		spectial();
	}
	while (num[0] < 10 - n)
	{
		i = 1;
		num[0] = j;
		while (i < n)
		{
			num[i] = i + j;
			i++;
		}
		cycle(num, 1, n - 1);
		j++;
	}
}


int		main(void)
{
	int n;

	scanf("%d", &n);
	ft_print_combn(n);
	return (0);
}

