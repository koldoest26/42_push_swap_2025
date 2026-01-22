/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisesti <luisesti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:22:56 by luisesti          #+#    #+#             */
/*   Updated: 2025/10/23 20:47:45 by luisesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (size != 0 && count > (size_t)-1 / size)
		return (NULL);
	b = count * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, b);
	return (p);
}
