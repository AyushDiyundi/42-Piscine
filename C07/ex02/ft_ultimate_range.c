/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:37:22 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/20 18:12:09 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*num;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	num = (int *)malloc(sizeof(int) * size);
	i = 0;
	if (num == NULL)
		return (-1);
	while (i < size)
	{
		num[i] = min;
		i++;
		min++;
	}
	*range = num;
	return (size);
}
