/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:57:00 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/08 14:46:48 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] || s2[i])
	{
		diff = s1[i] - s2[i];
		if (diff == 0)
			i++;
		else
			return (diff);
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	mine;
// 	int	original;
// 	char *str1="Hey!";
// 	char *str2="Helloa";

// 	mine = ft_strcmp(str1, str2);
// 	printf("Mine:  %d\n", mine);
// 	original = strcmp(str1,str2);
// 	printf("Original: %d\n", original);
// 	if (mine == original)
// 		printf("Works");
// 	else
// 		printf("Nope");
// 	return (0);
// }
