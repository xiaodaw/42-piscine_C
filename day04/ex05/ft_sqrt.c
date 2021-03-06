/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 21:24:44 by xwang             #+#    #+#             */
/*   Updated: 2018/07/28 22:20:26 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt < nb)
	{
		if (sqrt > 46340)
			return (0);
		sqrt++;
	}
	if ((nb % sqrt) == 0)
		return (sqrt);
	else
		return (0);
}
