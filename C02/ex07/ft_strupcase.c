/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:37:25 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/06 19:44:04 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	hey[50] = "Hello Pisciners @ me HIII";

// 	ft_strupcase(hey);
// 	printf("%s ", hey);
// 	return (0);
// }
