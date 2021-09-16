/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 05:29:37 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/16 05:29:45 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c ++;
	}
}

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int				i;
	unsigned int	cmp;
	char			*lng;

	lng = 0;
	cmp = 0;
	i = 0;
	while (src[i] != '\0' && cmp < n - 1)
	{
		dest[i] = src [i];
		i ++;
		cmp ++;
		while (src[i])
			lng ++;
	}
	dest[i] = '\0';
	return (lng);
}

/*int	main()
{
	char dest [] = "Wassup";
	char src [] = "MRFAYA";
	unsigned int n = 3;

	printf("%s", ft_strlcpy(dest, src, n));
	//ft_putstr(dest);
}*/
