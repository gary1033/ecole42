/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 19:04:18 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/09 14:35:02 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
**int		main(void)
**{
**	int a,b;
**	int c,d;
**	int *div;
**	int *mod;
**
**	div = &c;
**	mod = &d;
**	scanf("%d%d",&a,&b);
**	ft_div_mod(a, b, div,mod);
**	printf("%d %d", *div, *mod);
**	return (0);
**}
*/
