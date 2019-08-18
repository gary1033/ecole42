/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:30:25 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/15 21:29:44 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int g_i;
int g_j;

int		ft_checkspace(char *str)
{
	int check_end;
	int i;
	int count;

	i = 0;
	count = 0;
	check_end = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			check_end = 1;
			i++;
		}
		if (str[i] == '\0' || str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if (check_end == 1)
			{
				check_end = 0;
				i++;
				count++;
			}
		}
	}
	return (count);
}

int		ft_count_num(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		k;
	char	**ans;

	if ((ans = (char **)malloc(sizeof(char *) *
				ft_checkspace(str) + 1)) == NULL)
		return (NULL);
	while (str[g_i])
	{
		while (str[g_i] && (str[g_i] == ' ' ||
				str[g_i] == '\n' || str[g_i] == '\t'))
			g_i++;
		if (str[g_i])
		{
			k = 0;
			if ((ans[g_j] = (char *)malloc(sizeof(char) *
						(ft_count_num(str, g_i) + 1))) == NULL)
				return (NULL);
			while (str[g_i] && str[g_i] != ' ' &&
					str[g_i] != '\n' && str[g_i] != '\t')
				ans[g_j][k++] = str[g_i++];
			ans[g_j++][k] = '\0';
		}
	}
	ans[g_j] = NULL;
	return (ans);
}

/*
**int	main(void)
**{
**	char a[100] = "asdkjqwiod pqwiwepjr poqwj o	powe jfep	ewf po";
**	char **b;
**	b = ft_split_whitespaces(a);
**	int i=0;
**	while(b[i])
**	{
**		printf("%s\n",b[i]);
**		i++;
**	}
**	return (0);
**}
*/
