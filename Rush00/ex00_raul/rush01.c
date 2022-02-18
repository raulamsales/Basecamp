#include <unistd.h>

void rush(int x, int y)
{
	char writer;
	int x_original;
	int y_original;

	writer = '*';
	x_original = x;
	y_original = y;

	while (y > 0)
	{
		while (x > 0)
		{
			if (x == x_original && y == y_original)
			{
				write(1, "/", 1);
				x = x - 2;
			}
			if (x == x_original && y == 1)
			{
				write(1, "\\", 1);
				x = x - 2;
			}
			if (x != x_original && x != 0 && y != y_original && y != 1)
			{
				writer = ' ';
			}
			if (x == 1 && y != y_original && y != 1)
			{
				writer = '*';
			}
			if (x >=0)
			{
				write(1, &writer, 1);
			}
			x--;
			if (x == 0 && y == y_original)
			{
				write(1, "\\", 1);
			}
			if (x == 0 && y_original == 1)
			{
				y--;
			}
			if (x == 0 && y == 1)
			{
				write(1, "/", 1);
			}
		}
		writer = '*';
		write(1, "\n", 1);
		x = x_original;
		y--;
	}
}
