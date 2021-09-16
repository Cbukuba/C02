/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 05:46:51 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/16 05:46:54 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			str[i] = str[i] + 48;
			write(1, '\'', 1);
		}
		write(1, &str[i], 1);
		i ++;
	}
}

int	main()
{
	char str[] = {"Coucou\ntu vas bien ?"};
	ft_putstr_non_printable(str);
}