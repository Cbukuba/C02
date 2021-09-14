/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:20:00 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/14 15:20:04 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str [i] < 'z' || str [i] > 'a')
			&& (str[i] < 'Z' || str[i] > 'A'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i ++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	int reseult;
	reseult = ft_str_is_alpha("$");
	printf("%d", reseult);
}