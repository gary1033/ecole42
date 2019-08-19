/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 22:37:24 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/09 14:33:40 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int len;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	return (len);
}

/*
**int main()
**{
**	char str[10];
**	int len;
**
**	scanf("%s",str);
**	len = ft_strlen(str);
**	printf("%d", len);
**	return (0);
**}
*/
