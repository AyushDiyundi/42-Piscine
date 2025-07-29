/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:39:41 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/07 15:29:15 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a'
				&& str[i] <= 'z'))
			count++;
		i++;
	}
	if (i == 0 || count == i)
		return (1);
	else
		return (0);
}

// #include <unistd.h>
// int	main(void)
// {
// 	if (ft_str_is_alpha("Piscene"))
// 		write(1, "Y", 1);
// 	else
// 		write(1, "N", 1);
// }
