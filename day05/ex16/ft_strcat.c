/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:06:26 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 19:13:04 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *tmp_a;
	char *tmp_b;

	tmp_a = dest;
	tmp_b = src;
	while (*tmp_a)
	{
		tmp_a++;
	}
	while (*tmp_b)
	{
		*tmp_a = *tmp_b;
		tmp_a++;
		tmp_b++;
	}
	return (dest);
}

/*
**int main(void)
**{
**	char a[15]="asdas ";
**	char b[15]="aaaa ";
**	printf("%s\n",ft_strcat(a,b));
**	printf("%s\n",ft_strcat(a,b));
**	return (0);
**}
*/
