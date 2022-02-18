int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	count;

	dest_len = ft_strlen(dest);
	count = 0;
	while (src[count] != '\0' && count < nb)
	{
		dest[dest_len] = src[count];
		dest_len++;
		count++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
