/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:27:43 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/13 14:02:57 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		f;
	char	*pos;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		f = 0;
		if (str[i] == to_find[f])
		{
			pos = &str[i];
			while (str[i] == to_find[f] || to_find[f] == '\0')
			{
				if (to_find[f] == '\0')
					return (pos);
				i++;
				f++;
			}
			i = pos - str;
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	char	*mine;
// 	char	*original;
// 	char	str1[20] = "hey world";
// 	char	*str2= "heya";
// 	char	str3[20] = "hey world";
// 	char	*str4= "heya";

// 	mine = ft_strstr(str1, str2);
// 	printf("Mine:  %s\n", mine);
// 	original = strstr(str3, str4);
// 	printf("Original: %s\n", original);
// 	if (strcmp(mine, original))
// 		printf("Nope");
// 	else
// 		printf("Yes");
// 	return (0);
// }
