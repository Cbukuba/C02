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

	i = 0;
	while (str[i] != '\0')
	{
		if (str [i] > 48 && str [i] < 57)
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

/*int	main()
{
	char str [2];
	str[1] = '1';
	str[0] = '3' ;
	int reseult;
	reseult = ft_str_is_numeric(str);
	printf("%d", reseult);
}*/