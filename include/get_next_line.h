/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahirzall <ahirzall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:43:59 by ahirzall          #+#    #+#             */
/*   Updated: 2024/10/19 21:44:00 by ahirzall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

typedef enum e_rtrns
{
	SETTING_UP_FAIL = 7,
	INITIALIZATION_FAIL,
	DOUBLE_TMP_FAIL,
	READ_FAIL,
	FULL_LINE_UP,
	CONTIN_TILL_FULL_LINE_UP,
	OK = 0
}			t_rtrns;

typedef struct s_gnl
{
	char	leftover[1024][BUFFER_SIZE];
	char	*buffer;
	long	size_lft_ovr[1024];
	long	count_newlns[1024];
	char	*temp;
	char	*temp2;
	int		fd;
	long	size_temp;
	long	length_temp;
	char	*line;
	t_rtrns	what_rtrn;
}			t_gnl;

void		gnl_copy_from_leftover(t_gnl *gnl);
t_rtrns		gnl_read_file(t_gnl *gnl, long r, long i, long iter);
char		*get_next_line(int fd);

#endif