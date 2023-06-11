/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:48:08 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/11 22:43:36 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(int *stack, int size)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (i < size)
	{
		if (stack[i] < stack[i + 1])
			x = 0;
		i++;
	}
	return (x);
}

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

int	countarg(char **str)
{
	int	i;

	i = 1;
	while (str[i])
		i++;
	return (i);
}

char	**fill_args(int ac, char **av)
{
	char	*str;
	char	**nexos;
	int		i;

	i = 1;
	str = ft_strdup("");
	while (i < ac)
	{
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
		i++;
	}
	nexos = ft_split(str, ' ');
	return (nexos);
}

void	fill_stack(char **av, int ac, t_savage *s)
{
	int		i;
	int		j;
	int		x;
	char	**str;

	i = 1;
	str = fill_args(ac, av);
	s->size = countarg(str);
	s->stack_a = malloc(sizeof(int) * s->size);
	s->top_a = -1;
	s->stack_b = malloc(sizeof(int) * s->size);
	s->top_b = -1;
	x = 0;
	j = s->size - 1;
	while (x < s->size)
	{
		s->stack_a[x++] = ft_atoi(str[j--]);
		s->top_a++;
	}
	duplicate(s-> stack_a, s->size);
	if (sorted(s->stack_a, s->size))
		exit(0);
}

int	main(int ac, char **av)
{
	t_savage	s;

	if (ac == 1)
		exit (1);
	else
	{
		fill_stack(av, ac, &s);
		index_stack(&s);
		if (s.size == 2)
			sa(&s);
		else if (s.size == 3)
			sort_three(&s);
		else if (s.size == 4)
			sort_four(&s);
		else if (s.size == 5)
			sort_five(&s);
		else if (s.size > 5 && s.size <= 100)
			sort100(&s);
		else if (s.size > 100 && s.size <= 500)
			sort500(&s);
	}
}
