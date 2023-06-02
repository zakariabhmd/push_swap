/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbabahmi <zbabahmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:58:45 by zbabahmi          #+#    #+#             */
/*   Updated: 2023/06/02 18:34:22 by zbabahmi         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			err();
	}
	else if (str[i] == '+')
	{
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			err();
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		if (result == 2147483648 && sign == -1)
			return (sign * result);
		else if (result > 2147483647)
			err();
		i++;
	}
	return (result * sign);
}

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
