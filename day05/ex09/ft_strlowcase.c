/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:46:52 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 13:56:12 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 65 && *tmp <= 90)
		{
			*tmp += 32;
		}
		tmp++;
	}
	return (str);
}

/*
**int main(void)
**{
**	char a[10] = "AODJIO";
**	printf("%s",ft_strlowcase(a));
**	return (0);
**}
*/
