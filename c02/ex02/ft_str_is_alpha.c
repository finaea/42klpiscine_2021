int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || 'z' < str[i] || (str[i] > 'Z' && str[i] < 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
