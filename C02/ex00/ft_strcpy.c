/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:38:23 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/07 15:25:15 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*src)
		*temp++ = *src++;
	*temp = 0;
	return (dest);
}

// int	main(void)
// {
// 	char	a[] = "Hey Pisceners";
// 	char	cpy[15];

// 	write(1, "Original \n", 10);
// 	write(1, a, 13);
// 	ft_strcpy(cpy, a);
// 	write(1, "\n copy: \n", 9);
// 	write(1, cpy, 13);
// 	return (0);
// }
