/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhutt <lhutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 02:51:29 by lhutt             #+#    #+#             */
/*   Updated: 2022/11/10 02:56:17 by lhutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// ulimit -Sn
# ifndef MAX_FILE_DESCRIPTOR
#  define MAX_FILE_DESCRIPTOR 4864
# endif

char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *str);

size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *str, char *buff);
char	*ft_copy_str(char *str);
char	*ft_next_line(char *str);

#endif
