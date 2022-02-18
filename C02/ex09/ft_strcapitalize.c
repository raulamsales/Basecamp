char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i + 1] >= 97 && str[i + 1] <= 122)
		{
			if (str[i] >= 32 && str[i] <= 64)
				str[i + 1] -= 32;
			if (str[i] >= 91 && str[i] <= 96)
				str[i + 1] -= 32;
			if (str[i] >= 123 && str[i] <= 126)
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
