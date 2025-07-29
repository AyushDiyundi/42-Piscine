/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywei <ywei@student.42heilbronn.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:04:24 by ywei              #+#    #+#             */
/*   Updated: 2025/05/04 14:45:21 by ywei             ###   ########.fr       */
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
			if (y_c == 1 && (x_c == 1 || x_c == x))
				ft_putchar('A');
			else if (y_c == y && (x_c == 1 || x_c == x))
				ft_putchar('C');
			else if ((y_c == 1 || y_c == y) || (x_c == 1 || x_c == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x_c++;
		}
		y_c++;
		ft_putchar('\n');
	}
}
