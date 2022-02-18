#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	num_0;
	int	num_1;

	num_0 = -1;
	while (num_0++ <= 98)
	{
		num_1 = num_0;
		while (num_1++ < 99)
		{
			ft_putchar(num_0 / 10 + '0');
			ft_putchar(num_0 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(num_1 / 10 + '0');
			ft_putchar(num_1 % 10 + '0');
			if (num_0 != 98)
				write(1, ", ", 2);
		}
	}
}
