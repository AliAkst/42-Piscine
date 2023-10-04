/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksut <aaksut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:05 by aaksut            #+#    #+#             */
/*   Updated: 2023/09/17 15:42:08 by kullaniciAdi     ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *string)
{
	int	i;

	i = 0;
	while (*string)
	{
		i++;
		string++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_len(dest);
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
