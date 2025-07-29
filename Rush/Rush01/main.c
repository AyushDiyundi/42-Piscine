/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 12:20:54 by mbauer            #+#    #+#             */
/*   Updated: 2025/05/11 18:42:52 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		solve(int grid[4][4], int *view, int pos);
void	print_grid(int grid[4][4]);
void	print_str(char *str);
int		ft_check_input(char *str);
int		ft_transform(char **str, int *views);
int		ft_views(int *views);
void	make_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	view[16];
	int	grid[4][4];

	if (argc != 2)
	{
		print_str("Error\n");
	}
	if (ft_transform(argv, view))
	{
		if (!ft_views(view))
			print_str("Error\n");
		else
		{
			make_grid(grid);
			if (!solve(grid, view, 0))
				print_str("Error\n");
			else
				print_grid(grid);
		}
	}
}
// cc -Wall -Werror -Wextra *.c -o rush01
//./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
