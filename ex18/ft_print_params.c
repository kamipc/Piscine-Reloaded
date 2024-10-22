/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 10:45:01 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-16 10:45:01 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		ft_putstr(&av[i][0]);
		i++;
	}
	return (0);
}
