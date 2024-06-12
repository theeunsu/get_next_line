/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:25:51 by eahn              #+#    #+#             */
/*   Updated: 2024/03/27 15:47:12 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
	{
		s1 = gnl_calloc((gnl_strlen(s1) + 1), sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	new_str = gnl_calloc((gnl_strlen(s1) + gnl_strlen(s2) + 1), sizeof(char));
	if (!new_str)
		return (NULL);
	while (s1[i])
		new_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_str[j++] = s2[i++];
	new_str[j] = '\0';
	free(s1);
	s1 = NULL;
	return (new_str);
}

int	gnl_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i + 1);
		i++;
	}
	return (0);
}

char	*gnl_strcpy(char *dst, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*gnl_calloc(size_t count, size_t size)
{
	char	*tmp;
	int		n;

	n = size * count;
	tmp = malloc(sizeof(char) * n);
	if (!tmp)
		return (0);
	while (n--)
		*tmp = 0;
	return (tmp);
}
