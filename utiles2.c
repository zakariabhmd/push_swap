/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:45:46 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/13 20:42:23 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	else
	{
		while (s1[i])
			str[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	free(s1);
	return (str);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*i;
	size_t	alpha;
	size_t	beta;

	beta = 0;
	alpha = ft_strlen(s1);
	i = (char *)malloc(sizeof(char) * (alpha) + 1);
	if (!i)
		return (0);
	while (beta < alpha)
	{
		i[beta] = s1[beta];
		beta++;
	}
	i[beta] = '\0';
	return (i);
}

int	ft_atoi(char *str)
{
	t_savage	s;

	s.i = 0;
	s.sign = 1;
	s.result = 0;
	a_help(str, &s);
	while (str[s.i] != '\0' && str[s.i] >= '0' && str[s.i] <= '9')
	{
		s.result *= 10;
		s.result += str[s.i] - '0';
		if (s.result == 2147483648 && s.sign == -1)
			return (s.sign * s.result);
		else if (s.result > 2147483647)
			err();
		s.i++;
	}
	return (s.result * s.sign);
}

void	a_help(char *str, t_savage *s)
{
	while (str[s->i] == 32 || (str[s->i] >= 9 && str[s->i] <= 13))
		s->i++;
	if (str[s->i] == '-')
	{
		s->sign = -1;
		s->i++;
	}
	else if (str[s->i] == '+')
		s->i++;
}
