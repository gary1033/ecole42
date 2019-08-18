/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 10:05:03 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/13 19:20:48 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check_base(char *base)
{
	int		z;
	int		i;

	z = 0;
	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		ans[100];
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (base[size])
		size++;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr *= -1;
			printf("-");
		}
		while (nbr)
		{
			ans[i] = nbr % size;
			nbr /= size;
			i++;
		}
		while (--i >= 0)
			printf("%c", base[ans[i]]);
	}
}

/*
**int main(void)
**{
**	int		nbr=50;
**	char	base[10]="01";
**	ft_putnbr_base(nbr,base);
**	return (0);
**}
*/
