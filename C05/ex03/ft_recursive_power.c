/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:36:56 by omanar            #+#    #+#             */
/*   Updated: 2021/08/21 16:47:13 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rp(int rslt, int	nb, int power)
{
	rslt *= nb;
	power--;
	if (power > 0)
		return (ft_rp(rslt, nb, power));
	return (rslt);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_rp(1, nb, power));
}
