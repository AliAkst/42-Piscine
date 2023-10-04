/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksut <aaksut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:05 by aaksut            #+#    #+#             */
/*   Updated: 2023/09/13 20:32:56 by kullaniciAdi     ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*lowercase(char *str)
{
	int	i;	

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	lowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (control == 1)
			{
				str[i] = str[i] - 32;
			}
			control = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			control = 0;
		}
		else
			control = 1;
		i++;
	}
	return (str);
}
