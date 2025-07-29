/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiyundi <adiyundi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:01:33 by mhnatovs          #+#    #+#             */
/*   Updated: 2025/05/11 18:42:53 by adiyundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_str(char *str);

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_input(char **str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[1][i] < '1' || str[1][i] > '4')
			{
				return (0);
			}
		}
		else
		{
			if (str[1][i] != ' ')
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	ft_transform(char **str, int *views)
{
	int	i;

	i = 0;
	if (ft_check_input(str))
	{
		while (i < 16)
		{
			views[i] = str[1][i * 2] - '0';
			i++;
		}
	}
	if (!ft_check_input(str))
	{
		print_str("Error\n");
		return (0);
	}
	else
		return (1);
}

int	ft_views(int *views)
{
	int	i;
	int	sum_column;
	int	sum_row;

	i = 0;
	sum_column = 0;
	sum_row = 0;
	while (i < 4)
	{
		sum_column = views[i] + views[i + 4];
		sum_row = views[8 + i] + views[i + 12];
		if ((sum_column < 2 || sum_column > 5) || (sum_row < 2 || sum_row > 5))
			return (0);
		i++;
	}
	return (1);
}
