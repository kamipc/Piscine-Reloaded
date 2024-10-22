/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpinho-c <cpinho-c@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 10:34:10 by cpinho-c          #+#    #+#             */
/*   Updated: 2024-10-16 10:34:10 by cpinho-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <unistd.h>
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char s1[] = "hellow";
// 	char s2[] = "hello";

// 	printf("orig : %d\n", strcmp(s1, s2));
// 	printf("ft :%d", ft_strcmp(s1, s2));
// }