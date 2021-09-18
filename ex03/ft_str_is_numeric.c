/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:17:42 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/14 21:17:46 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	cmp;

	cmp = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] >= 48 && str [i] <= 57)
		{
			cmp = 1;
		}
		i ++;
	}
	return (cmp);
}

/*#include <stdio.h>
int	main()
{
	char str [2];
	str[1] = 'o';
	str[0] = '7' ;
	int reseult;
	reseult = ft_str_is_numeric(str);
	printf("%d", reseult);
}*/