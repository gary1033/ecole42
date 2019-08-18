/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 13:37:43 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 20:45:08 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int ans;

	ans = 1;
	if (nb >= 1 && nb <= 12)
	{
		while (nb > 1)
		{
			ans *= nb;
			nb--;
		}
		return (ans);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
**int		main(void)
**{
**	int num;
**	int ans;
**
**	scanf("%d", &num);
**	ans = ft_iterative_factorial(num);
**	printf("%d", ans);
**	return (0);
**}
*/
