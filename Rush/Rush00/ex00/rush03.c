/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:19:01 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/04 12:42:38 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_c;
	int	y_c;

	y_c = 1;
	while (y_c <= y && x > 0)
	{
		x_c = 1;
		while (x_c <= x)
		{
			if (x_c == 1 && (y_c == 1 || y_c == y))
				ft_putchar('A');
			else if (x_c == x && (y_c == 1 || y_c == y))
				ft_putchar('C');
			else if (x_c == 1 || x_c == x || y_c == 1 || y_c == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_c++;
		}
		y_c++;
		ft_putchar('\n');
	}
}
