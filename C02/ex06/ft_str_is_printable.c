/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:14:46 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/06 20:21:19 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] <= 126)
			count++;
		i++;
	}
	if (i == 0 || count == i)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	//char	text_1[] = "Hello World!";
// 	char	text_2[] = "HeLLo\nWorld!";
// 	// char	text_3[] = "Hello\tWorld!";
// 	// char	text_4[] = "";

// 	printf("%d",
// 		ft_str_is_printable(text_2)); // change input here
// }
