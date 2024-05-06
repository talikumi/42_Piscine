/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:42:19 by ntozzi            #+#    #+#             */
/*   Updated: 2024/05/04 19:18:57 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	iterator;
	int	inner_iterator;
	int	temp;

	iterator = 0;
	while (iterator < size - 1)
	{
		inner_iterator = 0;
		while (inner_iterator < size - 1)
		{
			if (tab[inner_iterator] > tab[inner_iterator + 1])
			{
				temp = tab[inner_iterator + 1];
				tab[inner_iterator + 1] = tab[inner_iterator];
				tab[inner_iterator] = temp;
			}
			inner_iterator++;
		}
		iterator++;
	}
}
