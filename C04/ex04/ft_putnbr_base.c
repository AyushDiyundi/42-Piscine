/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:28:29 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/13 17:14:04 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		l;
	long	n;

	n = nbr;
	l = ft_strlen(base);
	if (!ft_check_base(base))
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -1 * n;
	}
	if (n < l)
	{
		ft_putchar(base[n]);
	}
	if (n >= l)
	{
		ft_putnbr_base(n / l, base);
		ft_putnbr_base(n % l, base);
	}
}
// int	main()
// {
// 	char	*binary = "01";
// 	char	*decimal = "0123456789";
// 	char	*hexadecimal = "0123456789ABCDEF";
// 	char	*octal = "poneyvif";
// 	char	*b32 ="0123456789ABCDEFGHIJKLMNOpqrstuv";
// 	int	n = -42;

// 	ft_putnbr_base(n, decimal);
// }
