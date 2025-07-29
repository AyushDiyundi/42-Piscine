/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:43:02 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/07 18:59:06 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[13] = "Hello World!";
// 	char	str2[13];
// 	int		num;

// 	num = 16;
// 	// TEST ONE
// 	printf("\nOWN CODE\n");
// 	printf("\nSource: %s\nMax.: %d\n[~~FUNCTION MAGIC~~]\n", str1, num);
// 	ft_strlcpy(str2, str1, num);
// 	printf("Destination: %s\n\n", str2);
// 	printf("USING STRNCPY\n");
// 	printf("\nSource: %s\nMax.: %d\n[~~FUNCTION MAGIC~~]\n", str1, num);
// 	strncpy(str2, str1, num);
// 	printf("Destination: %s\n\n", str2);
// 	// TEST TWO
// 	if (ft_strlcpy(str2, str1, num) == strlcpy(str2, str1, num))
// 		printf("Output identical!\n");
// 	else
// 		printf("Output not identical!");
// 	return (0);
// }
