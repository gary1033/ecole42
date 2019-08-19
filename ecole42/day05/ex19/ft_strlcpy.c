/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:28:50 by ruchang           #+#    #+#             */
/*   Updated: 2019/08/12 22:56:25 by ruchang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned i;
	unsigned count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}

/*
**int main(void)
**{
**	char a[10]="asdsad";
**	char b[8] = "qwoid";
**	printf("%s\n%d",a,ft_strlcpy(a,b,10));
**	return (0);
**}
*/
