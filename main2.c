/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:00:47 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/12 13:09:23 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_savage *s)
{
	int	*stack_tmp;
	int	i;
	int	sort;
	int	j;

	i = 0;
	stack_tmp = malloc(sizeof(int) * s->size);
	while (i < s->size)
	{
		stack_tmp[i] = s->stack_a[i];
		i++;
	}
	i = 0;
	while (i < s->size)
	{
		j = i + 1;
		while (j < s->size)
		{
			if (stack_tmp[i] > stack_tmp[j])
			{
				sort = stack_tmp[i];
				stack_tmp[i] = stack_tmp[j];
				stack_tmp[j] = sort;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i <= s->size - 1)
	{
		j = 0;
		while (s->stack_a[i] != stack_tmp[j])
			j++;
		if (s->stack_a[i] == stack_tmp[j])
			s->stack_a[i] = j;
		i++;
	}
}