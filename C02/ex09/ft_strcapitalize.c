/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omanar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:28:35 by omanar            #+#    #+#             */
/*   Updated: 2021/08/12 18:28:54 by omanar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_fix(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((127 > str[i]) && (str[i] > 123))
			|| ((96 > str[i]) && (str[i] > 91))
			|| ((64 > str[i]) && (str[i] > 58))
			|| ((47 > str[i]) && (str[i] > 0)))
		{
			i++;
			if ((122 > str[i]) && (str[i] > 97))
			{
				str[i] -= 32;
			}
		}
		else
		{
			i++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	i = 0;
	if ((122 > str[0]) && (str[0] > 97))
	{
		str[0] -= 32;
	}
	ft_fix(str);
	return (str);
}
