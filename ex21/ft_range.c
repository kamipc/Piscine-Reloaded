/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 11:30:53 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-16 11:30:53 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *) malloc (size * sizeof(int) + 1);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// #include <stdio.h>
// int main()
// {
// 	int min = -10;
// 	int max = 10;
// 	int *range = ft_range(min, max);
// 	int i = 0;

// 	while (min < max)
// 	{
// 		printf("%d, ", range[i]);
// 		min++;
// 		i++;
// 	}
// 	free(range);
// }