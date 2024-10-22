/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 12:45:38 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-15 12:45:38 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		i = 2;
		while (i <= nb)
		{
			res *= i;
			i++;
		}
		if (res > 0)
			return (res);
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int nb = 20;
// 	printf("%d", ft_iterative_factorial(nb));
// }