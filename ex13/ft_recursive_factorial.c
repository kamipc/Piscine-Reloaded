/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 12:56:14 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-15 12:56:14 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 19)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main()
// {
// 	int nb = 20;
// 	printf("%d", ft_recursive_factorial(nb));
// }