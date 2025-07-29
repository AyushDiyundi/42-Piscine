/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:22:05 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/13 16:27:00 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sg;
	int	num;

	i = 0;
	sg = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sg = -sg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sg);
}
// #include <stdio.h>
// int	main()
// {
// 	char	str[] = " ----+-+-+1234ab567";
// 	char	str1[] = "   ---+-45-+1234ab567";
// 	printf("The result is: %d\n", ft_atoi(str));
// 	printf("The result is: %d\n", ft_atoi(str1));
// }
