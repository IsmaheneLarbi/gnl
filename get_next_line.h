/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:03:27 by ilarbi            #+#    #+#             */
/*   Updated: 2017/03/23 20:00:12 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <fcntl.h>
# include "./libft/libft.h"
# define BUFF_SIZE 10
# define OPEN_MAX sysconf(_SC_OPEN_MAX)

struct			s_file
{
	int			ret;
	char		*rest;
	char		*tmp2;
	char		tmp1[BUFF_SIZE + 1];
	int			oldfd;
};

int				get_next_line(const int fd, char **line);

#endif
