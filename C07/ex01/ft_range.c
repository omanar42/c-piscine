/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:41:53 by omanar            #+#    #+#             */
/*   Updated: 2021/08/23 16:07:09 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ints;

	i = 0;
	if (max <= min)
		return (0);
	ints = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		ints[i] = min;
		i++;
		min++;
	}
	return (ints);
}

/* #include <stdio.h>
int	main()
{
	int i = 0;
	int	min = -2;
	int	max = 5;
	int	*r = ft_range(min, max);

	while (min < max)
	{
		printf("%d ", r[i]);
		i++;
		min++;
	}
} */
