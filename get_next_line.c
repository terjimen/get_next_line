/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:15:02 by terjimen          #+#    #+#             */
/*   Updated: 2024/02/26 00:39:20 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"

//liberamos memoria del string
char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

//limpiamos el almacenamiento
char	*free_storage(char *storage)
{
	char	*new_storage;
	char	*ptr;
	int		len;

	ptr = ft_strchr(storage, '\n');
	if(!ptr)
	{
		new_storage = NULL;
		return (ft_free(&storage));
	}
	else
		len = (ptr - storage) + 1;

	if (!storage[len])
		return (ft_free(&storage));
	new_storage = ft_substr(storage, len , ft_strlen(storage) - len);
	ft_free(&storage);
	if (!newstorage)
		return (NULL);
	return (new_storage);
}
