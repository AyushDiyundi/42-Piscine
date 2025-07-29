/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 12:39:36 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/07 15:32:36 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	break_point;

	i = 0;
	break_point = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (break_point && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!break_point && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			break_point = 0;
		}
		else
		{
			break_point = 1;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	hey[50] = "hi, how are you? 42words forty-two; fifty+and+one";

// 	ft_strcapitalize(hey);
// 	printf("%s ", hey);
// 	return (0);
// }
