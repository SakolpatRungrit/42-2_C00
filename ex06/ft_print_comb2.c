/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakrungr <sakrungr@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:29:15 by sakrungr          #+#    #+#             */
/*   Updated: 2026/11/11 20:14:17 by sakrungr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(int n)
{
	char	c;

	if (n < 10)
	{
		write(1, "0", 1);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (n / 10) + '0';
		write(1, &c, 1);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	index;
	int	s_index;

	index = 0;
	while (index <= 98)
	{
		s_index = index + 1;
		if (index == 98)
		{
			ft_print_nb(index);
			write(1, " ", 1);
			ft_print_nb(s_index);
			return ;
		}
		while (s_index <= 99)
		{
			ft_print_nb(index);
			write(1, " ", 1);
			ft_print_nb(s_index);
			write(1, ", ", 2);
			s_index++;
		}
		index++;
	}
}
