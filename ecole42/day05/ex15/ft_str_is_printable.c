/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 18:44:27 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/13 19:22:49 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp < 32 || *tmp > 126)
		{
			return (0);
		}
		tmp++;
	}
	return (1);
}

/*
**int	main(void)
**{
**	char a[10]="wqiodn qw";
**	printf("%d", ft_str_is_printable(a));
**	return (0);
**}
*/
