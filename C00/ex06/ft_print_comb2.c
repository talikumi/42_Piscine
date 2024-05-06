/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:42:19 by ntozzi            #+#    #+#             */
/*   Updated: 2024/05/04 19:14:20 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(int num1, int num2)
{
	char	digit;

	digit = num1 / 10 + '0';
	write(1, &digit, 1);
	digit = num1 % 10 + '0';
	write(1, &digit, 1);
	write(1, " ", 1);
	digit = num2 / 10 + '0';
	write(1, &digit, 1);
	digit = num2 % 10 + '0';
	write(1, &digit, 1);
}

void	ft_print_comb2(void)
{
	int	first_num;
	int	second_num;

	first_num = 0;
	second_num = 1;
	while (first_num <= 98)
	{
		while (second_num <= 99)
		{
			print_digits(first_num, second_num);
			if (!(first_num == 98 && second_num == 99))
				write(1, ", ", 2);
			second_num++;
		}
		first_num++;
		second_num = first_num + 1;
	}
}
