/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 10:24:45 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 23:09:56 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = dest;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/*
**int	main(void)
**{
**	char a[10]="123456789";
**	char b[10]="98765";
**	char *dest;
**	dest = ft_strcpy(a,b);
**	printf("%s\n",dest);
**	return (0);
**}
*/
