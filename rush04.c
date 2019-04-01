/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnurkass <mnurkass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:19:38 by aponomar          #+#    #+#             */
/*   Updated: 2019/03/31 22:18:08 by mnurkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	wrush(int x, int y)
{
	int	r;
	int	c;

	c = 1;
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == x && c != 1 && r != 1))
				ft_putchar('A');
			else if ((r == 1 && c == x && c > 1) ||
					(r == y && c == 1 && r > 1))
				ft_putchar('C');
			else if (r > 1 && r < y && c > 1 && c < x)
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}

void rush(int x, int y)
{
	if (col > 0 && row > 0)
		wrush(col, row);
	else
		write(1, "enter parameters greater than zero", 34);
}
