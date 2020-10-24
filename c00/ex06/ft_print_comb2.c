/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 12:23:35 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/23 12:23:37 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int a, int b)
{
	char output[8];

	output[0] = (char)(48 + a / 10);
	output[1] = (char)(48 + a % 10);
	output[2] = ' ';
	output[4] = (char)(48 + b / 10);
	output[5] = (char)(48 + b % 10);
	output[6] = ',';
	output[7] = ' ';
	if (a == 98 && b == 99)
	{
		output[6] = '\0';
		output[7] = '\0';
	}
	write(1, output, 8);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchars(i, j);
			j++;
		}
		i++;
	}
}