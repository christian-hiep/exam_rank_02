/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 06:47:15 by cvu               #+#    #+#             */
/*   Updated: 2023/06/04 06:47:39 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*range;
	int	len = abs(end - start) + 1;
	int	i = 0;

	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	if (start < end)
	{
		while (start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i = 0;
	int	len = abs((end - start)) + 1;
	int	*range;
	
	range = malloc(sizeof(int) * (len));
	if (!range)
	{
		return (NULL);
	}
	while (i < len)
	{
		if (start <= end)
		{
			range[i] = start;
			start++;
		}
		else
		{
			range[i] = start;
			start--;
		}
		i++;
	}
	return (range);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int start = atoi(argv[1]);
        int end = atoi(argv[2]);
        int *range = ft_range(start, end);
        
        if (range == NULL)
        {
            printf("Failed to allocate memory\n");
            return 1;
        }
        
        for (int i = 0; i <= abs(end - start); i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");

        free(range);
    }
    else
    {
        printf("Please provide exactly two arguments\n");
    }

    return 0;
}
	
	
	
