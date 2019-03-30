void	rush(int col, int row)
{
	int now_row = 1;
	int now_col = 1;

	while (now_row <= row)
	{
		now_col = 1;
		while (now_col <= col)
		{
			if (now_row == 1)
			{
				if ((now_col == 1) || (now_col == col))
					ft_putchar('o');
				else
					ft_putchar('-');
			}
				else if (now_row == row)
			{
				if ((now_col == 1) || (now_col == col))
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else
			{
				if ((now_col == 1) || (now_col == col))
					ft_putchar('|');
				else
					ft_putchar(' ');
			}
			now_col++;
	}
	ft_putchar('\n');
		now_row++;
	}
}
