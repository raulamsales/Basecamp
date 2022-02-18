void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = -1;
	while (i++ < size--)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
	}
}