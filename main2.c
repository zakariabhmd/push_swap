/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:53:32 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/20 15:45:38 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stack(t_savage *s)
{
	int	*stack_tmp;
	int	i;
	int	j;

	j = 0;
	i = 0;
	stack_tmp = malloc(sizeof(int) * s->size);
	index_help2(s, i, j, stack_tmp);
	index_help(s, i, j, stack_tmp);
	free(stack_tmp);
}

void	index_help2(t_savage *s, int i, int j, int *stack_tmp)
{
	int	sort;

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
}

void	index_help(t_savage *s, int i, int j, int *stack_tmp)
{
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

void	freestr(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free (str);
}

void	check(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (invalid(str[i]) == 0)
		{
			freestr(str);
			err();
		}
		i++;
	}
}
