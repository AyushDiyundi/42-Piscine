/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:17:49 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/14 18:21:54 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		factorial *= 1;
	else
	{
		while (nb > 0)
		{
			factorial *= nb;
			nb--;
		}
	}
	return (factorial);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// }
