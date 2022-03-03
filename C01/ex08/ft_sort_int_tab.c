/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:56:16 by omanar            #+#    #+#             */
/*   Updated: 2021/08/11 08:57:47 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (i + j < size)
		{
			if (tab[i] > tab[i + j])
			{
				temp = tab[i];
				tab[i] = tab[i + j];
				tab[i + j] = temp;
			}
			j++;
		}
		i++;
	}
}
