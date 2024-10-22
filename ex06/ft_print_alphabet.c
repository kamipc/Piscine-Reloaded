/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 12:20:46 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-15 12:20:46 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// void ft_putchar(char c){
// 	write (1, &c, 1);
// }
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

// int main(){
// 	ft_print_alphabet();
// }