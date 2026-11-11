/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakrungr <sakrungr@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:36:20 by sakrungr          #+#    #+#             */
/*   Updated: 2026/11/11 21:01:55 by sakrungr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_nb(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}
	if (number < 10)
	{
		ft_print_nb(number + '0');
	}
	if (number >= 10)
	{
		ft_putnbr((number / 10));
		ft_putnbr((number % 10));
	}
}
