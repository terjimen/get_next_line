/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:15:28 by terjimen          #+#    #+#             */
/*   Updated: 2024/02/25 23:35:20 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Estas líneas sirven como una "guardia de inclusión" para evitar problemas que pueden surgir al incluir el mismo archivo de encabezado múltiples veces durante la compilación. Prevenir errores de redefinición y mejorar la eficiencia del proceso de compilación.
//

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>
# include<fcntl.h>
# include<limits.h>

char	*ft_strjoin(char *string, char *string1);
char	*ft_strdup(char *string);
char 	*ft_strchr(char *string, int n);
char	*ft_substr(char *string, unsigned int begin, size_t len);
char	*ft_free(char **string);
char	*get_next_line(int fd);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlen(char *c);

#endif
