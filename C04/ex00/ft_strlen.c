int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (*str)
	{
		str++;
		str_len++;
	}
	return (str_len);
}
