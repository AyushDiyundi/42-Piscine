/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:36:29 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/19 17:06:31 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;
	unsigned int	total;

	i = 0;
	j = 0;
	c = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	total = i + j;
	if (size > i)
	{
		while (src[c] && i < size - 1)
			dest[i++] = src[c++];
		dest[i] = '\0';
	}
	else
		return (j + size);
	return (total);
}
// int	main(void)
// {
// 	unsigned int	r;
// 	unsigned int	t;
// 	unsigned int	size;
// 	// unsigned int 	size_copy;

// 	char			dest[] = "";
// 	// char			dest_copy[11] = "Kurkuma"; //debug copy
// 	// char			src_copy[] = "Pizza";
// 	char			src[] = "Pizza";
// 	size = sizeof(dest);
// 	// size_copy = sizeof(dest_copy); //debug copy
// 	// t = strlcat(dest_copy, src_copy, size_copy); //debug copy
// 	r = ft_strlcat(dest, src, 4);
// 	printf("src string: %s\n", src);
// 	printf("dest string: %s\n", dest);
// 	// printf("dest_copy string: %s\n", dest_copy); //debug copy
// 	// printf("Build in return value: %u\n", t);
// 	printf("Return value: %u\n", r);
// 	return (0);
// }
