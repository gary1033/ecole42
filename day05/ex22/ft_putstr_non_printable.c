/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:04:41 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/13 20:46:27 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char tmp)
{
	char *base;

	base = "0123456789abcdef";
	if (tmp > 16)
	{
		ft_hex(tmp / 16);
		ft_hex(tmp % 16);
	}
	else
	{
		ft_putchar(base[tmp]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*
**int		main(void)
**{
**	char a[10]="asd]\t\vasd";
**	ft_putstr_non_printable(a);
**	return (0);
**}
*/
