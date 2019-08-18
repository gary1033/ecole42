/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 11:54:04 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 20:21:55 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int g_time;

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

	i = 0;
	if (lev == 8)
	{
		g_time++;
	}
	else
	{
		while (i < 8)
		{
			if (check(queens, i, lev))
			{
				queens[lev] = i;
				place(queens, lev + 1);
			}
			i++;
		}
	}
}

int		ft_eight_queens_puzzle(void)
{
	int queens[8];
	int i;
	int ans;

	g_time = 0;
	i = 0;
	while (i < 8)
	{
		queens[i] = 0;
		i++;
	}
	place(queens, 0);
	ans = g_time;
	return (ans);
}

/*
**int		main(void)
**{
**	int ans;
**
**	ans = ft_eight_queens_puzzle();
**	printf("%d", ans);
**	return (0);
**}
*/
