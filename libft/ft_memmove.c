/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:24:24 by luisesti          #+#    #+#             */
/*   Updated: 2025/10/23 18:24:27 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *) s1;
	src = (char *) s2;
	if (s1 == s2)
		return (s1);
	else if (s1 > s2)
	{
		dest += n;
		src += n;
		while (n)
		{
			dest--;
			src--;
			*dest = *src;
			n--;
		}
	}
	else
	{
		return (ft_memcpy(s1, s2, n));
	}
	return (s1);
}
