/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:03:35 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 23:03:12 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find)
	{
		while (*str)
		{
			i = 0;
			while (*(str + i) == *(to_find + i))
			{
				if (!*(to_find + i + 1))
				{
					return (str);
				}
				i++;
			}
			str++;
		}
		return (NULL);
	}
	else
	{
		return (str);
	}
}

/*
**int main(void)
**{
**	char a[10]="abcde";
**	char b[5]="cd";
**	char *ans;
**	ans = ft_strstr(a,b);
**	printf("%c",*ans);
**	return 0;
**}
*/
