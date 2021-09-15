/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:03:36 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/15 13:03:40 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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
	reseult = ft_str_is_printable("");
	printf("%d", reseult);
}*/