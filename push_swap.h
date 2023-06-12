/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:15:44 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/12 12:53:36 by zbabahmi         ###   ########.fr       */
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
	int	*stack_a;
	int	top_a;
	int	*stack_b;
	int	top_b;
	int	size;

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
void	a_help(char *str, int i, int sign);
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