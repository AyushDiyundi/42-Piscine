/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 12:50:40 by craabe            #+#    #+#             */
/*   Updated: 2025/05/04 12:09:21 by adiyundi         ###   ########.fr       */
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
			if ((x_c == 1 || x_c == x) && ((y_c == 1 || y_c == y)))
				ft_putchar('o');
			else if (y_c == 1 || y_c == y)
				ft_putchar('-');
			else if (x_c == 1 || x_c == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			x_c++;
		}
		y_c++;
		ft_putchar('\n');
	}
}
