/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:49:31 by xwang             #+#    #+#             */
/*   Updated: 2018/08/06 19:06:48 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			counter++;
		i++;
	}
	return (counter);
}
