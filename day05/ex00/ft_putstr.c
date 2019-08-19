/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:54:49 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 09:49:42 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

/*
**void	ft_putchar(char c)
**{
**	printf("%c", c);
**}
*/

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
**int		main(void)
**{
**	char str[10];
**	int i;
**
**	i = 0;
**	while (i < 9)
**	{
**		scanf("%c", &str[i]);
**		i++;
**	}
**	ft_putstr(str);
**	return (0);
**}
*/
