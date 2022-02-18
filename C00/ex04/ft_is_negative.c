#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		n = 'N';
	else
		n = 'P';
	write(1, &n, 1);
}
