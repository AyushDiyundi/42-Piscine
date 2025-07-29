/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:56:44 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/07 21:13:17 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[] = "Hello World";
// 	char	str2[]= "Random Stuff123";
// 	char	str3[] = "Hello World";
// 	char	str4[]= "Random Stuff123";
// 	int		num;

// 	num = 10;
// 	// TEST ONE
// 	printf("\nOWN CODE\n");
// 	printf("\nSource: %s\nMax.: %d\n[~~FUNCTION MAGIC~~]\n", str1, num);
// 	ft_strncpy(str2, str1, num);
// 	printf("Destination: %s\n\n", str2);
// 	printf("USING STRNCPY\n");
// 	printf("\nSource: %s\nMax.: %d\n[~~FUNCTION MAGIC~~]\n", str3, num);
// 	strncpy(str4, str3, num);
// 	printf("Destination: %s\n\n", str2);
// 	// TEST TWO
// 	int result = strcmp(ft_strncpy(str2, str1, num),strncpy(str4, str3, num));
// 	printf("\n%d ", result);
// 	if (result == 0)
// 		printf("Output identical!\n");
// 	else
// 		printf("Output not identical!");
// 	return (0);
// }
