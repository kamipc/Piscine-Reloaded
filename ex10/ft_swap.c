/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 12:36:31 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-15 12:36:31 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int main()
// {
// 	int a,b;
// 	a = 1;
// 	b = 2;
// 	printf("a = %d\nb = %d\n",a,b);
// 	ft_swap(&a, &b);
// 	printf("a = %d\nb = %d",a,b);
// }