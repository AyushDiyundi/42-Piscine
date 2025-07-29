/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 14:48:08 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/08 14:51:30 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		diff = s1[i] - s2[i];
		if (diff == 0)
			i++;
		else
			return (diff);
	}
	return (0);
}
