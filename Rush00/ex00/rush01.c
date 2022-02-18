/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalmeid <raulamsales@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:40:06 by raalmeid          #+#    #+#             */
/*   Updated: 2022/02/07 15:36:22 by raalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
char	*define_char(int curr_row, int n_row);

void	rush(int n_col, int n_row)
{
	char	*char_pointer;
	int		curr_row;
	int		curr_col;

	curr_row = 1;
	curr_col = 1;
	while (curr_row <= n_row)
	{
		char_pointer = define_char(curr_row, n_row);
		while (curr_col <= n_col)
		{
			if (curr_col == 1)
				ft_putchar(*(char_pointer + 0));
			else if (curr_col == n_col)
				ft_putchar(*(char_pointer + 2));
			else
				ft_putchar(*(char_pointer + 1));
			curr_col++;
		}
		curr_col = 1;
		ft_putchar('\n');
		curr_row++;
	}
}

char	*define_char(int curr_row, int n_row)
{
	static char	used_char[3];

	if (curr_row == 1)
	{
		used_char[0] = '/';
		used_char[1] = '*';
		used_char[2] = '\\';
	}
	else if (curr_row == n_row)
	{
		used_char[0] = '\\';
		used_char[1] = '*';
		used_char[2] = '/';
	}
	else
	{
		used_char[0] = '*';
		used_char[1] = ' ';
		used_char[2] = '*';
	}
	return (used_char);
}
