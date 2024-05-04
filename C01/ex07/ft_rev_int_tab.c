/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:42:19 by ntozzi            #+#    #+#             */
/*   Updated: 2024/05/04 19:17:53 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int iterator;
	int box;

	iterator = 0;
	while (iterator < size / 2)
	{
		box = tab[iterator];
		tab[iterator] = tab[size - 1 - iterator];
		tab[size - 1 - iterator] = box;
		iterator++;
	}
}
