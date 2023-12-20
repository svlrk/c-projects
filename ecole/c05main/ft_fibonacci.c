int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	if (i < 2)
		return (i);
	return (ft_fibonacci(i - 2) + ft_fibonacci(i - 1));
}