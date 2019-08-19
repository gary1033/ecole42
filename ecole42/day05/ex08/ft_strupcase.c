/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:40:17 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 13:55:23 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 97 && *tmp <= 122)
		{
			*tmp -= 32;
		}
		tmp++;
	}
	return (str);
}

/*
**int main(void)
**{
**	char a[10]="asdwqqwe";
**	printf("%s",ft_strupcase(a));
**	return (0);
**}
*/
