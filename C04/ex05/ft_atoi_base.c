/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:28:33 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/14 14:46:22 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	iterate(char *str, int i, int *sg)
{
	while ((!(str[i] <= 126 && str[i] > 32) || str[i] == 43 || str[i] == 45)
		&& str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
			i++;
		while (str[i] == '-')
		{
			*sg *= -1;
			i++;
		}
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sg;
	int	val;
	int	lb;
	int	i;

	if (!ft_check_base(base))
		return (0);
	sg = 1;
	val = 0;
	i = 0;
	lb = ft_strlen(base);
	i = iterate(str, i, &sg);
	while (ft_find_in_base(str[i], base) > -1)
	{
		val = val * lb + ft_find_in_base(str[i], base);
		i++;
	}
	return (sg * val);
}

// int	main(void)
// {
// 	int result=ft_atoi_base("++---+012afp","0123456789abcdef");
// 	printf("%d\n",result);
// }
