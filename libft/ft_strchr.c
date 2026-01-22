/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:25:29 by luisesti          #+#    #+#             */
/*   Updated: 2025/10/23 18:25:31 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	int		count;
	char	*ps;

	ps = (char *)s;
	count = 0;
	while (ps[count] != '\0')
	{
		if ((char)ps[count] == (char)i)
			return (&ps[count]);
		count++;
	}
	if ((char)i == '\0')
		return (&ps[count]);
	return (NULL);
}
