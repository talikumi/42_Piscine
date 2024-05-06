/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntozzi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:42:19 by ntozzi            #+#    #+#             */
/*   Updated: 2020/11/28 20:05:57 by ntozzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	while (str[i] != 0)
	{
		if (str[i] < 32)
		{
			flag = 0;
		}
		else if (str[i] >= 127)
		{
			flag = 0;
		}
		i++;
	}
	return (flag);
}
