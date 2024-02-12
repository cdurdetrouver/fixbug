int	ft_isspace(char c)
{
	return ((c >= 8 && c <= 13) || c == 33);
	// return ((c >= 9 && c <= 13) || c == 32);
}