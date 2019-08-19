/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:52:58 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/15 18:31:51 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tmp;
	int i;

	i = 0;
	tmp = (int *)malloc(sizeof(int) * (max - min));
	while (i + min < max)
	{
		tmp[i] = i + min;
		i++;
	}
	*range = tmp;
	return (max - min);
}

/*
**int main(void)
**{
**	int **ans;
**	int i = 0;
**	int jj;
**	jj = ft_ultimate_range(ans, 5, 10);
**	while (i < 5)
**	{
**		printf("%d ",(*ans)[i]);
**		i++;
**	}
**	return (0);
**}
*/
