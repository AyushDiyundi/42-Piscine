/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:15:09 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/20 18:12:20 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * ft_strlen(src));
	i = 0;
	if (temp == NULL)
		return (NULL);
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}

// int	main(void)
// {
// 	char	a[] = "Hey Pisceners";
// 	int		result;

// 	printf("mine %s\n", ft_strdup(a));
// 	printf("Original: %s\n", strdup(a));
// 	result = strcmp(ft_strdup(a), strdup(a));
// 	if (result == 0)
// 		printf("Output identical!\n");
// 	else
// 		printf("Output not identical!");
// }
