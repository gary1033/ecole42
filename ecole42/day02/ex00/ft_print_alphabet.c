/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 13:23:52 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/08 20:04:55 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**void	ft_putchar(char c)
**{
**	printf("%c", c);
**}
*/

void	ft_print_alphabet(void)
{
	char alp;

	alp = 'a';
	while (alp <= 'z')
	{
		ft_putchar(alp++);
	}
}
