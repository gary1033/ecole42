/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:29:17 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/15 22:31:37 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_cocat_params(int argc, char **argv)
{
	int		count;
	int		i;
	int		j;
	char	*ans;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j++])
		{
			count++;
		}
		count++;
		i++;
	}
	ans = (char *)malloc(sizeof(char) * (count + 1));
	i = 0;
	while (i < argc - 1)
	{
		ans = ft_strcat(ans, argv[i + 1]);
		i++;
	}
	return (ans);
}

/*
**int	main(int argc, char **argv)
**{
**	char *ans;
**	int i;
**	ans = ft_cocat_params(argc, argv);
**	printf("%s", ans);
**	return (0);
**}
*/
