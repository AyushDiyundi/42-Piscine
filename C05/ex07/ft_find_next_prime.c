/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:53:28 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/14 20:09:28 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;

	i = 2;
	count = 0;
	if (nb < 2)
		return (2);
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
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(174));
// }
