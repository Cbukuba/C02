/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:05:10 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/15 14:05:13 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0' && str[0] >= 97 && str[0] <= 126)
		str[0] = str[0] - 32 ;
	while (str[i] != '\0')
	{	
		if ((str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < '0' || str[i - 1] > '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				str[i] = str[i] + 32;
		}
		i ++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
    char str [] = "salut, comment tu vas ?
	42mots quarante:deux: cinquante+et+un";
    printf("%s",ft_strcapitalize(str));
}*/