/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksut <aaksut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:23:05 by aaksut            #+#    #+#             */
/*   Updated: 2023/09/17 15:36:30 by kullaniciAdi     ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[d] != '\0' && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
