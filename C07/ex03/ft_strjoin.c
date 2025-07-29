/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:11:53 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/20 18:12:26 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_length(char **strs, int size, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		if (i < size - 1)
			total += ft_strlen(sep);
		i++;
	}
	return (total);
}

void	ft_strcpy(char *dest, char *src, int *pos)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*pos] = src[i];
		i++;
		(*pos)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	if (size == 0)
	{
		res = (char *)malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	res = (char *)malloc(sizeof(char) * (ft_total_length(strs, size, sep) + 1));
	if (!res)
		return (NULL);
	while (i < size)
	{
		ft_strcpy(res, strs[i], &pos);
		if (i < size - 1)
			ft_strcpy(res, sep, &pos);
		i++;
	}
	res[pos] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char	*arr[] = {"", "Hello", "", "world"};
// 	char	*res;

// 	res = ft_strjoin(4, arr, "-");
// 	if (res)
// 	{
// 		printf("Result: %s\n", res); // Output: -Hello--world
// 		free(res);
// 	}
// 	return (0);
// }
