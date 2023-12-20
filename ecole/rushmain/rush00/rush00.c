/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaslan <emaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:51:13 by emaslan           #+#    #+#             */
/*   Updated: 2023/09/03 19:52:18 by emaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_c;
	int	y_c;

	y_c = 0;
	while (y_c++ <= y)
	{
		x_c = 0;
		while (x_c++ <= x)
		{
			if ((x_c == 1 && y_c == 1) 
				|| (y_c == 1 && x_c == y)
				|| (x_c == 1 && y_c == y) || (x_c == x && y_c == y))
				ft_putchar('o');
			else if ((y_c == 1 && x_c > 1 && x_c < x) 
				|| (y_c == y && x_c > 1 && x_c < x))
				ft_putchar('-');
			else if ((x_c == 1 && y_c > 1 && y_c < y) 
				|| (x_c == x && y_c > 1 && y_c < y))
				ft_putchar('|');
			else 
				ft_putchar(' ');
		}
		if (y_c != y)
			ft_putchar('\n');
	}
}
