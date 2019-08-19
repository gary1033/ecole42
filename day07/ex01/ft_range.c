/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:42:57 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/16 13:38:37 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *array;

	i = 0;
	array = (int *)malloc(sizeof(int) * (max - min));
	while (i + min < max)
	{
		array[i] = i + min;
		i++;
	}
	return (array);
}

/*
**int		main(void)
**{
**	int *arr;
**	int i;
**
**	i = 0;
**	arr = ft_range(50, 100);
**	while (arr[i])
**	{
**		printf("%d ", arr[i]);
**		i++;
**	}
**	return (0);
**}
*/
