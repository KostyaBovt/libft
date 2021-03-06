/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbovt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:06:52 by kbovt             #+#    #+#             */
/*   Updated: 2016/11/23 21:07:09 by kbovt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static	size_t	sln(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t litt_l;
	size_t i2;

	if (little[0] == '\0')
		return ((char*)big);
	litt_l = sln(little);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		i2 = i;
		while (big[i2] == little[j] && little[j] && i2 < len)
		{
			i2++;
			j++;
		}
		if (j == litt_l)
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}
