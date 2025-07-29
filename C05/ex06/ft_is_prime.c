/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:40:49 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/14 20:06:17 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	if (nb < 2)
		return (0);
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			count++;
			break ;
		}
		i++;
	}
	if (!count)
		return (1);
	else
		return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(11));
// }
