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
	if (str[0] != '\0' && str[0] >= 97 && str[0] <= 127)
		str[0] = str[0] - 32 ;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 32 && str[i - 1] <= 47)
			&& (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if ((str[i - 1] >= 65 && str[i - 1] <= 90)
			&& (str[i] >= 65 && str[i] <= 90 ))
			str[i] = str[i] + 32;
		if ((str[i - 1] >= 48 && str[i - 1] <= 57)
			&& (str[i - 1] >= 97 && str[i - 1] <= 122)
			&& (str[i - 1] >= 57 && str[i - 1] <= 64)
			&& (str[i - 1] >= 91 && str[i - 1] <= 96)
			&& (str[i - 1] >= 123 && str[i - 1] <= 126))
			str[i] = str[i] - 32;
		i ++;
	}
	return (str);
}

/*int main()
{
    char str [] = "salut, comment tu vas ?
	 42mots quarante-deux: cinquante+et+un";
    printf("%s",ft_strcapitalize(str));
}*/