/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:54:13 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/11 17:58:21 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_row(int g[4][4], int *v, int r);
int	valid_column(int g[4][4], int *v, int c);

int	valid(int g[4][4], int *v, int n, int pos)
{
	int	i;
	int	c;
	int	r;

	r = pos / 4;
	c = pos % 4;
	i = 0;
	while (i < 4)
	{
		if (g[r][i] == n || g[i][c] == n)
			return (0);
		i++;
	}
	g[r][c] = n;
	if (c == 3)
		if (valid_row(g, v, r) == 0)
			return (0);
	if (r == 3)
		if (valid_column(g, v, c) == 0)
			return (0);
	return (1);
}

int	solve(int grid[4][4], int *view, int pos)
{
	int	n;
	int	r;
	int	c;

	r = pos / 4;
	c = pos % 4;
	n = 1;
	if (pos == 16)
		return (1);
	while (n <= 4)
	{
		if (valid(grid, view, n, pos))
		{
			grid[r][c] = n;
			if (solve(grid, view, pos + 1))
				return (1);
		}
		n++;
	}
	grid[r][c] = 0;
	return (0);
}
// "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
