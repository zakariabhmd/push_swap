/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:58:45 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/20 00:45:25 by zbabahmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s[a])
	{
		if (a >= start && b < len)
		{
			str[b] = s[a];
			b++;
		}
		a++;
	}
	str[b] = '\0';
	return (str);
}

int	counter(char *tpm, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*tpm)
	{
		if (*tpm != c && count == 0)
		{
			count = 1;
			i++;
		}
		else if (*tpm == c)
			count = 0;
		tpm++;
	}
	if (i == 0)
		err();
	return (i);
}

int	size_word(char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		word;
	int		size;
	char	**sp;
	int		j;

	i = 0;
	j = -1;
	word = counter(s, c);
	sp = (char **)malloc((word + 1) * sizeof(char *));
	if (!sp)
		return (0);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = size_word(s, c, i);
		sp[j] = ft_substr(s, i, size);
		i += size;
	}
	sp[j] = 0;
	return (sp);
}

int	invalid(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (flag == 1 || i > 0)
				return (0);
			flag = 1;
		}
		else if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
