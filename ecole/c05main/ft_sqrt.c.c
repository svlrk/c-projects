int	ft_sqrt(int nb)
{
	int	i;

    if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	i = 2;
	if (nb >= 2)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}