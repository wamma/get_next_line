/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:19:04 by heongjunpar       #+#    #+#             */
/*   Updated: 2022/11/28 18:07:49 by hyungjup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

//get_next_line.c
char	*get_next_line(int fd);

//get_next_line_utils.c
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif