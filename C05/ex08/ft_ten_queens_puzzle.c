/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:11:08 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/14 20:22:19 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
}

int	is_safe(int board[10], int col, int row)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || board[i] - i == row - col || board[i] + i == row
			+ col)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int board[10], int col, int *g_count)
{
	int	row;

	if (col == 10)
	{
		print_solution(board);
		*g_count++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_safe(board, col, row))
		{
			board[col] = row;
			solve(board, col + 1, g_count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	g_count;

	g_count = 0;
	solve(board, 0, &g_count);
	return (g_count);
}
