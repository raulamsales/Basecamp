char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	dest_len;

	count = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[count] != '\0')
	{
		dest[dest_len] = src[count];
		dest_len++;
		count++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
