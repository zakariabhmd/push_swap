/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:48:08 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/01 21:07:53 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_stack(char **av, t_savage *s)
{
	int i = 1;
	char **str;
	while (av[i])
	{
		str = ft_split(av[i], ' ');
		int j = 0;
		while (str[j])
		{
			s->stack_a[j] = ft_atoi(str[j]);
			puts(str[i]);
			printf("%d\n", s->stack_a[j]);
			j++;
		}
		i++;
	}
}
int main(int ac, char **av)
{
	t_savage s;
	if (ac == 1)
		exit(1);
	else
	{
		fill_stack(av, &s);
	}
}