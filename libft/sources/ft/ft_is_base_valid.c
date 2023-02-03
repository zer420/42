/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_base_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:26:00 by lhutt             #+#    #+#             */
/*   Updated: 2022/11/25 03:22:54 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_base_valid(char *base)
{
	size_t	i;
	size_t	j;
	size_t	base_len;

	if (!base)
		return (0);
	i = 0;
	base_len = ft_strlen(base);
	if (base_len == 0 || base_len == 1)
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] >= 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
