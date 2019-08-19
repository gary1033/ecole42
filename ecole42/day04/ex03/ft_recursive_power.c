/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 14:36:07 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 20:59:33 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (nb < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		nb *= ft_recursive_power(nb, power - 1);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (nb);
}

/*
**int main(void)
**{
**	int num;
**	int pow;
**	int ans;
**
**	scanf("%d%d", &num, &pow);
**	ans = ft_recursive_power(num, pow);
**	printf("%d", ans);
**	return (0);
**}
*/
