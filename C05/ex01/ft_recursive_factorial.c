/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:48:20 by omanar            #+#    #+#             */
/*   Updated: 2021/08/21 16:04:47 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rf(int f, int nb)
{
	f *= nb;
	nb--;
	if (nb > 0)
		return (ft_rf(f, nb));
	return (f);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_rf(1, nb));
}
