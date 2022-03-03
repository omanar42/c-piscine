/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:29:03 by omanar            #+#    #+#             */
/*   Updated: 2021/08/21 16:33:40 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	rslt;

	if (power < 0)
		return (0);
	rslt = 1;
	while (power > 0)
	{
		rslt *= nb;
		power--;
	}
	return (rslt);
}
