/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaseaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 19:48:19 by mcaseaux          #+#    #+#             */
/*   Updated: 2017/07/08 23:17:26 by mcaseaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb && (nb % i != 0))
	{
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}
