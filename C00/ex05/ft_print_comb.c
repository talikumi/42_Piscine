/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:42:19 by ntozzi            #+#    #+#             */
/*   Updated: 2024/05/04 19:13:26 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digit_one;
	char	digit_two;
	char	digit_three;

	digit_one = '0';
	digit_two = '1';
	digit_three = '2';
	while (digit_one <= ('7'))
	{
		while (digit_two <= ('8'))
		{
			while (digit_three <= ('9'))
			{
				write(1, &digit_one, 1);
				write(1, &digit_two, 1);
				write(1, &digit_three, 1);
				if (!(digit_one == '7'
						&& digit_two == '8' && digit_three == '9'))
					write(1, ", ", 2);
				digit_three++;
			}
			digit_three = ++digit_two + 1;
		}
		digit_two = ++digit_one;
	}
}
