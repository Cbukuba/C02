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
	int	cmp;

	cmp = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str [i] > 'z' || str [i] < 'a')
			&& (str[i] > 'Z' || str[i] < 'A'))
		{
			cmp = 0;
		}
		i ++;
	}
	return (cmp);
}

/*int	main()
{
	int reseult;
	reseult = ft_str_is_alpha("abeb");
	printf("%d", reseult);
}*/