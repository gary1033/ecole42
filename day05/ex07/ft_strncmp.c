/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:08:02 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 13:39:29 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (*(s1 + i) > *(s2 + i))
		{
			return (1);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			return (-1);
		}
		else if (!*(s1 + i + 1) && !*(s2 + i + 1))
		{
			return (0);
		}
		i++;
	}
	return (0);
}

/*
**int main(void)
**{
**	char a[10] = "asdasd";
**	char b[10] = "asdas";
**	printf("%d",ft_strncmp(a,b,5));
**	return (0);
**}
*/
