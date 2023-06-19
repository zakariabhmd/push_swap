/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:48:08 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/20 00:42:18 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] < stack[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
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
		counter(av[i], ' ');
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, av[i]);
		i++;
	}
	nexos = ft_split(str, ' ');
	free(str);
	return (nexos);
}

void	fill_stack(char **av, int ac, t_savage *s)
{
	int		j;
	int		x;
	char	**str;

	str = fill_args(ac, av);
	check(str);
	s->size = countarg(str);
	s->stack_a = malloc(sizeof(int) * s->size);
	s->top_a = -1;
	s->stack_b = malloc(sizeof(int) * s->size);
	s->top_b = -1;
	x = 0;
	j = s->size - 1;
	while (x < s->size)
	{
		s->stack_a[x++] = my_atoi(str[j--]);
		s->top_a++;
	}
	freestr(str);
	duplicate(s-> stack_a, s->size);
}

// void	check_vide(char *str)
// {
// 	int i;
// 	int dex = 0;
// 	i = 0;
// 	while(str[i])
// 	{
// 		if (str[0] == '\0')
// 			err();
// 		if(str[i] != ' ')
// 			dex++;
// 		// else if(str[i] == ' ' && str[i + 1] == '\0')
// 			// err();
// 		i++;
// 	}
// 	if(dex == 0)
// 		err();
// }

int	main(int ac, char **av)
{
	t_savage	s;

	if (ac == 1)
		exit (1);
	else
	{
		fill_stack(av, ac, &s);
		index_stack(&s);
		if (sorted(s.stack_a, s.size) == 0)
		{
			if (s.size == 2)
				sort_two(&s);
			else if (s.size == 3)
				sort_three(&s);
			else if (s.size == 4)
				sort_four(&s);
			else if (s.size == 5)
				sort_five(&s);
			else if (s.size > 5 && s.size <= 100)
				sort100(&s);
			else if (s.size > 100)
				sort500(&s);
		}
		free_stack(&s);
	}
}
