/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 07:28:35 by cvu               #+#    #+#             */
/*   Updated: 2023/06/04 07:28:58 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*range;
	int	len = abs(end - start) + 1;
	int	i = 0;

	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	if (start < end)
	{
		while(start <= end)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while(start >= end)
		{
			range[i] = end;
			end++;
			i++;
		}
	}
	return (range);
}
