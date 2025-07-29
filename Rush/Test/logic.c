/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tria.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:29:57 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/10 14:30:20 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int valid(int **g, int *v, int r, int c, int n)
{
	int i = 0;
	int l[4], rl[4], t[4], bt[4];
	while (i < 4)//check the entire row or column
	{
		if (g[r][i] == n || g[i][c] == n) // Reject duplicates in row or column
			return (0);
		i++;
	}
	g[r][c] = n; // Temporarily place number to simulate views
	if (c == 3) // End of row, check left/right visibility
	{
		i = 0;
		while (i < 4) //extracts rows from left to right(l) and right to left(rl) for visibility check ifrom the grid
		{
			l[i] = g[r][i];         // Left to right
			rl[i] = g[r][3 - i];    // Right to left
			i++;
		}
		if (visible(l) != v[8 + r] || visible(rl) != v[12 + r])
			return (0); // Row clues don’t match
	}
	if (r == 3) // End of column, check top/bottom visibility
	{
		i = 0;
		while (i < 4)//extracts rows from top to bottom (t) and bottom to top bt) for visibility check ifrom the grid
		{
			t[i] = g[i][c];         // Top to bottom
			bt[i] = g[3 - i][c];    // Bottom to top
			i++;
		}
		if (visible(t) != v[c] || visible(bt) != v[4 + c])
			return (0); // Column clues don’t match
	}
	return (1); // Placement is valid
}

int solve(int **grid, int *view, int pos)
{
	int r = pos / 4;  // Row index
	int c = pos % 4;  // Column index
	int n = 1;
	if (pos == 16)    // All cells filled successfully
		return (1);
	while (n <= 4)    // Try numbers 1 through 4
	{
		if (valid(grid, view, r, c, n)) // Check if number is valid
		{
			grid[r][c] = n;             // Temporarily place number
			if (solve(grid, view, pos + 1)) // Recurse to next position
				return (1);             // If solution found, return success
		}
		n++;
	}
	grid[r][c] = 0; // Backtrack if no number fits
	return (0);     // No solution found for this path
}
