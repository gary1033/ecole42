/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 10:49:50 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/18 14:38:38 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		g_done;
char	g_ans[10][10];

void	sudoku(char **plate, int y, int x);
int		check_num(char **plate, int col, int row, char num);
void	display(void);
void	ft_copy(char **plate);

void	ft_copy(char **plate)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			g_ans[i][j] = plate[i + 1][j];
			j++;
		}
		i++;
	}
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
		ft_copy(plate);
		g_done++;
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

void	display(void)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &g_ans[i][j], 1);
			if (j < 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
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
		else
			display();
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
