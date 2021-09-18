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
		i ++;
	}
	return (str);
}

/*int main()
{
    char str [] = "salut, comMent tu vas ?
	 42mots quarante-deux: cinquante+et+un";
    printf("%s",ft_strcapitalize(str));
}*/