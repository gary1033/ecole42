/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:11:03 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/16 15:35:37 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		i;

	i = 0;
	while (src[i])
		i++;
	tmp = (char *)malloc(i + 1);
	i = 0;
	while (src[i])
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/*
**int		main(void)
**{
**	char a[10] = "asdassad";
**	printf("%s",ft_strdup(a));
**	return (0);
**}
*/
