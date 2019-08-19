/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:33:09 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 20:46:15 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb >= 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

/*
**int main(void)
**{
**	int num;
**	int ans;
**
**	scanf("%d",&num);
**	ans = ft_recursive_factorial(num);
**	printf("%d",ans);
**	return (0);
**}
*/
