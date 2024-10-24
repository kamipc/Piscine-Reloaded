/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 13:11:42 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-15 13:11:42 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i <= nb / 2)
		{
			if (i * i == nb && nb % i == 0)
				return (i);
			i++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_sqrt(30));
// }