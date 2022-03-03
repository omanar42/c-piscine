/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:06:58 by omanar            #+#    #+#             */
/*   Updated: 2021/08/18 13:25:35 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	if (size <= j)
		total = size + i;
	else
		total = j + i;
	i = 0;
	while (src[i] && j + 1 < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (total);
}
