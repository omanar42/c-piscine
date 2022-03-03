/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:11:26 by omanar            #+#    #+#             */
/*   Updated: 2021/08/25 10:34:51 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

char	*ft_roll(char *str, int size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if ((i + 1) < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	if (size <= 0)
	{
		str = (char *)malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	str = (char *)malloc(((sizeof(char) * len + 1)));
	if (!str)
		return (NULL);
	i = 0;
	str[0] = '\0';
	str = ft_roll(str, size, strs, sep);
	return (str);
}
