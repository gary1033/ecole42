/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:58:05 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 18:38:57 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp < 97 || *tmp > 122)
		{
			return (0);
		}
		tmp++;
	}
	return (1);
}

/*
**int main(void)
**{
**	char a[10]="asdawq";
**	printf("%d",ft_str_is_lowercase(a));
**	return (0);
**}
*/