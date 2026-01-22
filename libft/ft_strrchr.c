/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:26:38 by luisesti          #+#    #+#             */
/*   Updated: 2025/10/23 18:26:39 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*sptr;

	count = ft_strlen(s);
	sptr = (char *)s;
	while (count >= 0)
	{
		if (sptr[count] == (char)c)
		{
			return (&sptr[count]);
		}
		count--;
	}
	return (NULL);
}
