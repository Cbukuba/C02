/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 00:03:51 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/14 00:03:58 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_putchar(char c)
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
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char dest [] = "Hello";
	char src [] = "wassp";

	ft_strcpy(dest, src);
	ft_putstr(dest);
}*/