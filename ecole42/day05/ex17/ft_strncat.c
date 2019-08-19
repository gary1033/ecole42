/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:24:26 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 19:32:21 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*tmp1;
	char	*tmp2;
	int		i;

	i = 0;
	tmp1 = dest;
	tmp2 = src;
	while (*tmp1)
	{
		tmp1++;
	}
	while (i < nb)
	{
		tmp1[i] = src[i];
		i++;
	}
	tmp1[i] = '\0';
	return (dest);
}

/*
**int		main(void)
**{
**	char a[15] ="to be";
**	char b[15] = "or not to be";
**	printf("%s", ft_strncat(a,b,6));
**	return (0);
**}
*/
