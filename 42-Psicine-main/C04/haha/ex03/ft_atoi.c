/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksut <aaksut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:05 by aaksut            #+#    #+#             */
/*   Updated: 2023/09/17 18:22:27 by kullaniciAdi     ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	i;
	int	t;

	i = 0;
	a = 0;
	t = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++ ;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			t = t * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + str[i] - 48;
		i++;
	}
	return (t * a);
}
