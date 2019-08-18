/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 12:25:48 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/13 19:22:56 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base_len(char *base)
{
	int i;
	int z;

	i = 0;
	while (base[i])
	{
		z = i + 1;
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int		check_str(char *str, char *base)
{
	int start;
	int i;
	int j;

	start = 0;
	while (base[start] && ((base[start] >= 9 && base[start] <= 13)
				|| base[start] == 32))
	{
		start++;
	}
	while (str[start])
	{
		j = 0;
		while (base[j] && (str[start] != base[j] ||
					(str[start] == '+' || str[start] == '-')))
			j++;
		if (str[start] != base[j] &&
				str[start] != '+' && str[start] != '-')
			return (0);
		start++;
	}
	start++;
	if (start == 0)
		return (0);
	return (start);
}

int		get_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] && base[i] != c)
	{
		i++;
	}
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int ans;
	int i;
	int z;
	int neg;
	int base_len;

	if (!(base_len = check_base_len(base)) || !check_str(str, base))
		return (0);
	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
	{
		i++;
	}
	z = i - 1;
	neg = 1;
	ans = 0;
	while (str[++z] && (((str[z] == '+' || str[z] == '-') &&
				z == i) || (str[z] != '+' && str[z] != '-')))
	{
		if (str[z] == '-')
			neg = -1;
		else if (str[i] != '+')
			ans = ans * base_len + get_base(str[z], base);
	}
	return (ans * neg);
}

/*
**int		main(void)
**{
**	char a[10] = "101010";
**	char base[10] = "01";
**	printf("%d", ft_atoi_base(a,base));
**	return (0);
**}
*/
