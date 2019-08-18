/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 00:11:46 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 10:18:40 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int tmp;
	int neg;

	i = 0;
	neg = 0;
	tmp = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	neg = (str[i] == '-') ? -1 : 0;
	(str[i] == '+' || str[i] == '-') ? i++ : i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp *= 10;
		tmp += str[i] - '0';
		i++;
	}
	tmp *= (neg != 0) ? neg : 1;
	return (tmp);
}

/*
**int main(void)
**{
**	char str[10];
**	int tmp;
**
**	scanf("%s",str);
**	tmp = ft_atoi(str);
**	printf("%d", tmp);
**	return (0);
**}
*/
