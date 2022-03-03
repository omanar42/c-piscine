/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:27:45 by omanar            #+#    #+#             */
/*   Updated: 2021/08/08 16:27:48 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1 );
}

void	ft_if(int i, int j, int k)
{
	if (i == 7 && j == 8 && k == 9)
	{
		ft_putchar(i + '0');
		ft_putchar(j + '0');
		ft_putchar(k + '0');
	}
	else
	{
		ft_putchar(i + '0');
		ft_putchar(j + '0');
		ft_putchar(k + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_if(i, j, k);
				k++;
			}
			j++;
		}	
		i++;
	}
}
