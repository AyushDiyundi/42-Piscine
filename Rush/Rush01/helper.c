/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 16:53:51 by adiyundi          #+#    #+#             */
/*   Updated: 2025/05/11 17:48:01 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible(int *line)
{
	int	i;
	int	max;
	int	vis;

	max = 0;
	vis = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			vis++;
		}
		i++;
	}
	return (vis);
}

int	valid_row(int g[4][4], int *v, int r)
{
	int	i;
	int	l[4];
	int	rl[4];

	i = 0;
	while (i < 4)
	{
		l[i] = g[r][i];
		rl[i] = g[r][3 - i];
		i++;
	}
	if (visible(l) != v[8 + r] || visible(rl) != v[12 + r])
		return (0);
	else
		return (1);
}

int	valid_column(int g[4][4], int *v, int c)
{
	int	i;
	int	t[4];
	int	bt[4];

	i = 0;
	while (i < 4)
	{
		t[i] = g[i][c];
		bt[i] = g[3 - i][c];
		i++;
	}
	if (visible(t) != v[c] || visible(bt) != v[4 + c])
		return (0);
	else
		return (1);
}

void	make_grid(int grid[4][4])
{
	int	j;
	int	i;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
