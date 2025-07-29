/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craabe <craabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:54:09 by craabe            #+#    #+#             */
/*   Updated: 2025/05/04 12:26:37 by craabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_c;
	int	y_c;

	x_c = 1;
	y_c = 1;
	while (y_c <= y && x > 0 && y > 0)
	{
		while (x_c <= x)
		{
			if ((x_c == 1 && y_c == 1) || ((x_c == x && y_c == y && y != 1
						&& x != 1)))
				ft_putchar('/');
			else if (((x_c == x && y_c == 1) || (x_c == 1 && y_c == y)))
				ft_putchar('\\');
			else if (x_c >= 2 && x_c != x && y_c != 1 && y_c != y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			x_c++;
		}
		y_c++;
		ft_putchar('\n');
		x_c = 1;
	}
}
