/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:37:54 by omanar            #+#    #+#             */
/*   Updated: 2021/08/11 09:43:25 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	rs;

	i = 0;
	rs = size - 1;
	while (rs > i)
	{
		rs = size - 1;
		temp = tab[i];
		tab[i] = tab[rs];
		tab[rs] = temp;
		size--;
		i++;
	}
}
