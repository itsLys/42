char	check_alphanumeric_char(char c)
{
	if (c >= '0' && c <= '9')
		return 'n';
	if (c >= 'a' && c <= 'z')
		return 'l';
	if (c >= 'A' && c <= 'Z')
		return 'u';
	return 0;
}
char	*ft_strcapitalize(char *str)
{
	char *original;

	original = str;
	while (*str)
	{
		while (*str && !check_alphanumeric_char(*str))
			str++;
		if (*str && check_alphanumeric_char(*str) == 'l')
			*(str) -= 'a' - 'A';
		str++;
		while (*str && check_alphanumeric_char(*str))
		{
			if (check_alphanumeric_char(*str) == 'u')
				*str += 'a' - 'A';
			str++;
		}
	}
	return original;
}
