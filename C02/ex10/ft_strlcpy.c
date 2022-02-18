unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				count_1;
	unsigned int	count_2;

	size += 1;
	count_1 = 0;
	count_2 = 0;
	while (src[count_1] != '\0')
	{
		count_1++;
	}
	if (size > 0)
	{
		while (count_2 < size - 1)
		{
			dest[count_2] = src[count_2];
			count_2++;
		}
	}
	if (size > 0)
		dest[count_2] = '\0';
	return (count_1);
}
