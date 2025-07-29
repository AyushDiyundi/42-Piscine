/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:19:54 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/12 14:27:13 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
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

// 	mine = ft_strncat(str1, str2,4);
// 	printf("Mine:  %s\n", mine);
// 	original = strncat(str3, str4,4);
// 	printf("Original: %s\n", original);
// 	if (strcmp(mine, original))
// 		printf("Nope");
// 	else
// 		printf("Yes");
// 	return (0);
// }
