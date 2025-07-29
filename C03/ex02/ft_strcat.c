/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:52:20 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/08 18:12:46 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*mine;
// 	char	*original;
// 	char	str1[20] = "Hey! ";
// 	char	*str2= "Hello";
// 	char	str3[20] = "Hey! ";
// 	char	*str4= "Hello";

// 	mine = ft_strcat(str1, str2);
// 	printf("Mine:  %s\n", mine);
// 	original = strcat(str3, str4);
// 	printf("Original: %s\n", original);
// 	if (strcmp(mine, original))
// 		printf("Nope");
// 	else
// 		printf("Yes");
// 	return (0);
// }
