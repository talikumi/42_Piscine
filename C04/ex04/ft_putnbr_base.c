/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsociety <fsociety@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:42:19 by tozzi             #+#    #+#             */
/*   Updated: 2024/05/04 19:24:33 by fsociety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main_check(char *base)
{
	int	i;
	int	j;
	int	flag;

	flag = 1;
	i = 0;
	while (base[i])
	{
		j = i;
		while (base[++j])
		{
			if (base[j] == base[i])
				flag = 0;
		}
		i++;
	}
	return (flag);
}

int	base_check(char *base, int *length)
{
	int	i;

	i = 0;
	while (base[*length])
		*length = *length + 1;
	if (*length < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	if (main_check(base) == 0)
		return (0);
	return (1);
}

void	print(int n, char *base, int length)
{
	if (n <= -length)
	{
		write(1, "-", 1);
		print(n / -length, base, length);
		n = n % -length;
		print(-n, base, length);
	}
	else if (n > -length && n < 0)
	{
		write(1, "-", 1);
		write(1, &base[-n], 1);
	}
	else if (n >= length)
	{
		print(n / length, base, length);
		print(n % length, base, length);
	}
	else if (n >= 0 && n < length)
	{
		write(1, &base[n], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;
	int	i;

	length = 0;
	i = base_check(base, &length);
	if (i == 0)
		return ;
	print(nbr, base, length);
}
