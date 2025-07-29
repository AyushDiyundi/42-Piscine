/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:06:13 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/20 18:12:14 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*num;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	num = (int *)malloc(sizeof(int) * size);
	i = 0;
	if (num == NULL)
		return (NULL);
	while (i < size)
	{
		num[i] = min;
		i++;
		min++;
	}
	return (num);
}
// int	main(void)
// {
// 	int	mn;
// 	int	mx;
// 	int	*n;
// 	int	s;
// 	int	i;

// 	mn = 11;
// 	mx = 20;
// 	n = ft_range(mn, mx);
// 	s = mx - mn;
// 	i = 0;
// 	while (i < s)
// 	{
// 		printf("%d\t", n[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
