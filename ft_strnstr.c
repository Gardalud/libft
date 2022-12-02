/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguincha <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:46:44 by bguincha          #+#    #+#             */
/*   Updated: 2022/11/11 13:52:27 by bguincha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	int				k;
	char			*src;
	char			*fnd;

	i = 0;
	src = (char *)haystack;
	fnd = (char *)needle;
	if (!*fnd)
		return ((char *)src);
	while (src[i] != '\0' && i < len)
	{
		k = 0;
		while (src[i + k] == fnd[k] && src[i + k]
			&& fnd[k] && i + k < len || fnd[k] == '\0')
		{
			if (fnd[k] == '\0')
			{
				return ((char *)&src[i]);
			}
			k++;
		}
		i++;
	}
	return (0);
}
