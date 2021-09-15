/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:49:30 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/14 22:49:34 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main()
{
	int reseult;
	reseult = ft_str_is_lowercase("elo");
	printf("%d", reseult);
}*/