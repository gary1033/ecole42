/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:53:31 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/10 15:18:35 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (j <= i / 2)
	{
		tmp = str[j];
		str[j] = str[i - j];
		str[i - j] = tmp;
		j++;
	}
	return (str);
}

/*
**int main(void)
**{
**	char str[10];
**
**	scanf("%s",str);
**	printf("%s", ft_strrev(str));
**	return(0);
**}
*/
