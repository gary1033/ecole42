/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:52:13 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 14:31:35 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*s1) && *(s2))
	{
		if (*(s1 + i) - *(s2 + i) == 0)
		{
			i++;
		}
		else if (*(s1 + i) - *(s2 + i) > 0)
		{
			return (1);
		}
		else if (*(s1 + i) - *(s2 + i) < 0)
		{
			return (-1);
		}
		if (!*(s1 + i + 1) && !*(s2 + i + 1))
		{
			return (0);
		}
	}
	return (0);
}

/*
**int main(void)
**{
**	char a[10] = "aspdjwq";
**	char b[10] = "wqkdlas";
**	char c[10] = "aspdjwq";
**	char d[10] = "asp";
**	printf("a&b:%d\n",ft_strcmp(a,b));
**	printf("a&c:%d\n",ft_strcmp(a,c));
**	printf("a&d:%d\n",ft_strcmp(a,d));
**}
*/
