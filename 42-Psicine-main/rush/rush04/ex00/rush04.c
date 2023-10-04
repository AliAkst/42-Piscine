/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isincer <isincer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:30:48 by isincer           #+#    #+#             */
/*   Updated: 2023/09/03 15:13:04 by isincer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	r;

	if (x < 1 || y < 1)
		return ;
	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && r == 1)
				|| (c == x && r == y && x != 1 && y != 1))
				ft_putchar('A');
			else if ((c == 1 && r == y) || (c == x && r == 1))
				ft_putchar('C');
			else if ((c < x && c > 1) && (r < y && r > 1))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
