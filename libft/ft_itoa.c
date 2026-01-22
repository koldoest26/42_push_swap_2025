/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:23:50 by luisesti          #+#    #+#             */
/*   Updated: 2025/10/23 18:23:50 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	fill_digits(char *str, int len, int negative, long i)
{
	while (len >= negative)
	{
		str[len] = (i % 10) + '0';
		i /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		negative;
	long	i;

	i = n;
	negative = 0;
	if (i < 0)
	{
		negative = 1;
		i = -i;
	}
	len = ft_count(i) + negative;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (negative)
		str[0] = '-';
	len -= 1;
	fill_digits(str, len, negative, i);
	return (str);
}
