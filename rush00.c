/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 08:16:12 by kilkim            #+#    #+#             */
/*   Updated: 2019/03/31 22:08:27 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	writing(int col, int row)
{
	int now_row;
	int now_col;

	now_row = 1;
	now_col = 1;
	while (now_row <= row)
	{
		now_col = 1;
		while (now_col <= col)
		{
			if ((now_row == 1 && ((now_col == 1) || (now_col == col)))
					|| (now_row == row && ((now_col == 1) || (now_col == col))))
				ft_putchar('o');
			else if ((now_row != 1 && now_row != row)
					&& (now_col == 1 || now_col == col))
				ft_putchar('|');
			else if (now_row == 1 || now_row == row)
				ft_putchar('-');
			else
				ft_putchar(' ');
			now_col++;
		}
		ft_putchar('\n');
		now_row++;
	}
}

void	rush(int col, int row)
{
	if (col > 0 && row > 0)
		writing(col, row);
	else
		write(1, "enter parameters greater than zero", 34);
}


