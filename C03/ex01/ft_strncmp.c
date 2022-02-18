int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}
