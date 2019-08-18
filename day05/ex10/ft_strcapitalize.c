/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:57:55 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 16:57:21 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_cap(char *tmp, int is_capital)
{
	if (*tmp >= 97 && *tmp <= 122)
	{
		if (is_capital == 0)
		{
			is_capital = 1;
			*tmp -= 32;
		}
	}
	else if (*tmp >= 65 && *tmp <= 90)
	{
		if (is_capital == 1)
			*tmp += 32;
		else
			is_capital = 1;
	}
	else
		is_capital = 0;
	return (is_capital);
}

char	*ft_strcapitalize(char *str)
{
	int is_capital;
	int i;

	i = 0;
	is_capital = 0;
	while (*(str + i))
	{
		is_capital = is_cap(str + i, is_capital);
		i++;
	}
	return (str);
}

/*
**int main(void)
**{
**	char a[70] = "salut, comment tu vas ? 42 mots quarante-deux";
**	printf("%s",ft_strcapitalize(a));
**	return (0);
**}
*/
