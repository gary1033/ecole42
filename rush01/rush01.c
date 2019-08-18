/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:49:50 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/18 10:29:58 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int g_done;

void	ft_putchar(char c);
void	sudoku(char **plate, int y, int x);
int		check_num(char **plate, int col, int row, char num);
void	display(char **plate);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_num(char **plate, int col, int row, char num)
{
	int i;
	int j;
	int row_start;
	int col_start;

	row_start = (row / 3) * 3;
	col_start = ((col - 1) / 3) * 3 + 1;
	i = 0;
	while (i < 9)
	{
		if (plate[col][i] == num || plate[i + 1][row] == num)
			return (0);
		i++;
	}
	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			if (plate[i + col_start][j + row_start] == num)
				return (0);
		}
	}
	return (1);
}

void	sudoku(char **plate, int y, int x)
{
	int i;

	i = 1;
	if (y == 10)
	{
		display(plate);
		g_done = 1;
	}
	else if (plate[y][x] != '.')
	{
		sudoku(plate, y + ((x + 1) / 9), (x + 1) % 9);
	}
	else
	{
		while (i < 10)
		{
			if (check_num(plate, y, x, i + '0'))
			{
				plate[y][x] = i + '0';
				sudoku(plate, y + ((x + 1) / 9), (x + 1) % 9);
			}
			plate[y][x] = '.';
			i++;
		}
	}
}

void	display(char **plate)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(plate[i][j]);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 10)
	{
		sudoku(argv, 1, 0);
		if (g_done != 1)
			write(1, "Error\n", 6);
	}
	else
	{
		write(1, "Error\n", 6);
	}
}
