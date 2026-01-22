/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:26:42 by luisesti          #+#    #+#             */
/*   Updated: 2025/10/23 18:26:44 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	char	*setptr;
	char	*s1ptr;

	i = 0;
	s1ptr = (char *)s1;
	setptr = (char *)set;
	end = ft_strlen(s1ptr);
	while (ft_strchr(setptr, s1ptr[i]))
		i++;
	if (i == end)
		return ("");
	while (ft_strchr(setptr, s1ptr[end - 1]))
		end--;
	return (ft_substr(s1ptr, i, end - i));
}
