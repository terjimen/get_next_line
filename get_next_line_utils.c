/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:15:16 by terjimen          #+#    #+#             */
/*   Updated: 2024/02/26 00:39:18 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

//concatenacion de dos cadenas de caracteres en una nueva
char	*ft_strjoin(char *s1, char *s2)
{
	char	*sum;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	sum = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!sum)
		return (NULL);
	ft_memcpy(sum, s1, len_s1);
	ft_memcpy(sum + len_s1, s2, len_s2);
	sum[len_s1 + len_s2] = '\0';
	return (sum);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (!s || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
