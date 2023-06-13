/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:15:44 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/13 20:45:34 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_savage
{
	int		*stack_a;
	int		top_a;
	int		*stack_b;
	int		top_b;
	int		size;
	int		i;
	int		sign;
	long	result;

}t_savage;

char	**ft_split(char *s, char c);
int		ft_atoi( char *str);
void	err(void);
void	duplicate(int *num, int len);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
char	**fill_args(int ac, char **av);
void	fill_stack(char **av, int ac, t_savage *s);
char	*ft_strdup( char *s1);
void	index_stack(t_savage *s);
char	*ft_strdup(char *s1);
void	a_help(char *str, t_savage *s);
void	index_help(t_savage *s, int i, int j, int *stack_tmp);
void	index_help2(t_savage *s, int i, int j, int *stack_tmp);
void	freestr(char **str);
void	check(char **str);
int		invalid(char *str);
//--------------------------------
void	sa(t_savage *s);
void	sb(t_savage *s);
void	ra(t_savage *s);
void	rb(t_savage *s);
void	rra(t_savage *s);
void	rrb(t_savage *s);
void	pa(t_savage *s);
void	pb(t_savage *s);
//---------------------------------
void	sort_three(t_savage *s);
void	sort_five(t_savage *s);
void	sort_four(t_savage *s);
void	sort100(t_savage *s);
void	sort500(t_savage *s);

#endif