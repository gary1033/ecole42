/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:52:49 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 23:09:28 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*tmp;

	tmp = dest;
	i = -1;
	while (++i <= n)
	{
		if (i < n)
		{
			if (src[i] != '\0')
			{
				*tmp = src[i];
			}
			else
			{
				*tmp = '\0';
			}
		}
		else
		{
			*tmp = '\0';
		}
		tmp++;
	}
	return (dest);
}

/*
**int		main(void)
**{
**	char a[10];
**	char *b;
**	b = ft_strncpy(a,"asds",9);
**	printf("%s",b);
**	return (0);
**}
*/
