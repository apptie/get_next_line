/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:52:54 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/20 10:10:45 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

int				get_next_line(int fd, char **line);

size_t			ft_strlen(char *s);
int				ft_strdup_static(char **static_buff, int fd, char *s);
void			ft_free_malloc(char *s);
int				ft_strdup_line(char **line, char *s);

#endif
