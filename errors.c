/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:18:13 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/02 20:15:51 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	err(void)
{
	write (2, "ERROR\n", 6);
	exit (1);
}

void	duplicate(int *num, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < len)
	{
		j = 0;
		while(j < i)
		{
			if (num[i] == num[j])
				err();
			j++;
		}
		i++;
	}
}