/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:54:04 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 21:29:59 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

/*
**void	ft_putchar(char c)
**{
**	write(1, &c, 1);
**}
*/

int		check(int *queens, int row, int col)
{
	int i;

	i = 0;
	while (i < col)
	{
		if (queens[i] == row)
		{
			return (0);
		}
		else if (row - queens[i] == col - i)
		{
			return (0);
		}
		else if (col - i == queens[i] - row)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	place(int *queens, int lev)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (lev == 8)
	{
		while (j < 8)
		{
			ft_putchar(queens[j] + '0');
			j++;
		}
		ft_putchar('\n');
	}
	else
	{
		while (i++ < 8)
		{
			if (check(queens, i - 1, lev))
			{
				queens[lev] = i - 1;
				place(queens, lev + 1);
			}
		}
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int queens[8];
	int i;
	int ans;

	i = 0;
	while (i < 8)
	{
		queens[i] = 0;
		i++;
	}
	place(queens, 0);
}

/*
**int		main(void)
**{
**	ft_eight_queens_puzzle_2();
**	return (0);
**}
*/
