/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakrungr <sakrungr@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:18:09 by sakrungr          #+#    #+#             */
/*   Updated: 2026/11/11 20:04:32 by sakrungr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_num(char vec[])
{
	if (vec[0] == '7' && vec[1] == '8' && vec[2] == '9')
	{
		write(1, vec, 3);
	}
	else
	{
		write(1, vec, 5);
	}
}

void	ft_print_comb(void)
{
	char	vec[5];

	vec[0] = '0';
	vec[3] = ',';
	vec[4] = ' ';
	while (vec[0] <= '7')
	{
		vec[1] = vec[0] + 1;
		while (vec[1] <= '8')
		{
			vec[2] = vec[1] + 1;
			while (vec[2] <= '9')
			{
				ft_write_num(vec);
				vec[2]++;
			}
			vec[1]++;
		}
		vec[0]++;
	}
}
