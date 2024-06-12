/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:38:19 by eahn              #+#    #+#             */
/*   Updated: 2024/03/27 15:37:39 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# define MAX_FD 10240

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

/* get_next_line.c */
char	*get_next_line(int fd);
char	*read_save_str(int fd, char *static_str);
char	*extract_line(char *static_str, int *newline_len);
char	*extract_next_str(char *static_str, int *newline_len);

/* get_next_line_utils.c */
int		gnl_strlen(const char *s);
char	*gnl_strjoin(char *s1, char *s2);
int		gnl_strchr(char *s, int c);
char	*gnl_strcpy(char *dst, char *src, size_t n);
char	*gnl_calloc(size_t count, size_t size);

#endif
