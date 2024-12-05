/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keezgi <keezgi@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:53:18 by keezgi            #+#    #+#             */
/*   Updated: 2024/12/05 04:48:48 by keezgi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*buffer;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	buffer = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!buffer)
		return (free(buffer), NULL);
	i = -1;
	while (s1[++i])
		buffer[i] = s1[i];
	j = -1;
	while (s2[++j])
		buffer[i + j] = s2[j];
	buffer[i + j] = '\0';
	return (free(s1), buffer);
}

int	ft_strchr(char *str, char a)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == a)
			return (1);
		str++;
	}
	return (0);
}
