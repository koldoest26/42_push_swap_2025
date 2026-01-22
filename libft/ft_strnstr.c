/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:26:32 by luisesti          #+#    #+#             */
/*   Updated: 2025/10/23 18:26:34 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t n)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)small;
	if (*small == '\0')
		return (b);
	while (b[i] != '\0' && i < n)
	{
		if (b[i] == l[0])
		{
			j = 0;
			while (b[j] != '\0' && b[i + j] == l[j] && (i + j) < n)
			{
				j++;
				if (l[j] == '\0')
					return (&b[i]);
			}
		}
		i++;
	}
	return (NULL);
}
