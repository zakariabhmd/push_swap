/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:48:08 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/03 18:33:59 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int countarg(char **str)
{
	int i = 1;
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
	int i = 1;
	int j;
	int x;
	char **str;
	int size;

	str = fill_args(ac, av);
	size = countarg(str);
	s->stack_a = malloc(sizeof(int) * size);
	s->top_a = -1;
	s->stack_b = malloc(sizeof(int) * size);
	s->top_b = -1;
	x = 0;
	j = size - 1;
	while(x < size)
	{
		s->stack_a[x++] = ft_atoi(str[j--]);
		s->top_a++;
	}
	duplicate(s-> stack_a, size);
}

int main(int ac, char **av)
{
	t_savage s;

	if (ac == 1)
		exit(1);
	else
		fill_stack(av, ac, &s);
}