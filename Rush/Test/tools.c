/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:45:58 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/10 15:48:29 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible(int *line)
{
	int	i;

	i = 0;
	int max = 0; // Tracks tallest building seen so far
	int vis = 0; // Visibility counter
	while (i < 4)
	{
		if (line[i] > max) // A taller building becomes visible
		{
			max = line[i];
			vis++;
		}
		i++;
	}
	return (vis); // Return number of visible buildings
}
void	print_grid(int **grid)
{
	int		i,j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0'; // Convert int to char
			write(1, &c, 1);      // Print digit
			if (j < 3)
				write(1, " ", 1); // Print space between numbers
			j++;
		}
		write(1, "\n", 1); // End of row
		i++;
	}
}
int	**create_grid(void)
{
	int	**grid;
	int	i,j;

	i = 0;
	grid = malloc(sizeof(int *) * 4); // Allocate 4 row pointers
	if (!grid)
		return (0);
	while (i < 4)
	{
		grid[i] = malloc(sizeof(int) * 4); // Allocate each row
		if (!grid[i])
			return (free_grid(grid), 0); // Clean up if allocation fails
		j = 0;
		while (j < 4)
			grid[i][j++] = 0; // Initialize cells to 0
		i++;
	}
	return (grid);
}
void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
		free(grid[i++]); // Free each row
	free(grid);          // Free top-level pointer
}
