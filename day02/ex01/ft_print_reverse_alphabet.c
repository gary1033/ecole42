/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 13:37:06 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/07 19:37:00 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** void	ft_putchar(char c)
**{
**	printf("%c", c);
**}
*/

void	ft_print_reverse_alphabet(void)
{
	char alp;

	alp = 'z';
	while (alp >= 'a')
	{
		ft_putchar(alp--);
	}
}
