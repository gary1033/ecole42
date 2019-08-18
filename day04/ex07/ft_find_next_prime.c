/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 22:25:53 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 21:28:33 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int srh;
	int nx_prm;

	nx_prm = 0;
	srh = nb - 1;
	while (nx_prm != 1)
	{
		srh++;
		nx_prm = is_prime(srh);
	}
	return (srh);
}

/*
**int main(void)
**{
**	int num;
**	int ans;
**
**	scanf("%d",&num);
**	ans = ft_find_next_prime(num);
**	printf("%d", ans);
**	return (0);
**}
*/
