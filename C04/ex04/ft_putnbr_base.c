/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:15:54 by omanar            #+#    #+#             */
/*   Updated: 2021/08/19 13:23:38 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_base(char *base)
{
	int	cb;

	cb = 0;
	while (base[cb])
	{
		cb++;
	}
	return (cb);
}

int	check_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_base(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	bl;

	bl = ft_base(base);
	if (!check_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	n = nbr;
	if (n > bl - 1)
	{
		ft_putnbr_base(n / bl, base);
	}
	ft_putchar(base[n % bl]);
}
