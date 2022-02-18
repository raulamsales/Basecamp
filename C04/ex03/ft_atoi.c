int	ft_atoi(char *str)
{
	int	sign;
	int	dest;

	sign = 1;
	dest = 0;
	while (*str && (*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
	{
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -1;
		}
		if (*str >= '0' && *str <= '9')
			dest = dest * 10 + *str - '0';
		str++;
	}				
	return (sign * dest);
}
