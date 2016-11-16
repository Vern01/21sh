/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21sh.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 07:59:10 by vivan-de          #+#    #+#             */
/*   Updated: 2016/11/14 12:12:28 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SH21_H
# define	SH21_H
# define	TERM_BUF 0
# define	BUFFADDR 0
# define	BUFFER_SIZE 1024
# include <curses.h>
# include <term.h>
# include <stdlib.h>
#include <sys/types.h>                                                                                         
#include <sys/uio.h>                                                                                           
#include <unistd.h> 
# include "libft/libft.h"

typedef struct	s_info
{
	char	*cl_string;
	char	*cm_string;
	char	pc;
	char	*bc;
	char	*up;
	int		height;
	int		width;
	int		auto_wrap;
}				t_info;

typedef struct  s_win
{
    struct termios nwin;
    struct termios owin;
}               t_win;

typedef struct          s_line
{
    int             i;
    size_t          cursor;
    int             l_cursor;
    int             row;
    char            c;
    char            *line;
    char            *entered;
    struct s_line   *prev;
    struct s_line   *next;
}                       t_line;

typedef struct  s_data
{
    t_win   win;
    t_line  *line;
}               t_data;

void			exit_msg(char *s);
int				ft_check_env_var(char *arg, char **env);
void			ft_free_str_arr(char **arr);
char			ft_getchar(const int fd);
char			*ft_get_env_var(char **env, int ind);
char			**ft_strsplit(char const *s, char c);
char			*ft_search_path(char **args, t_data *data, int *script);
void   			get_term_info(t_info *info);
void			init_terminal_data(void);
void			prompt_user(t_info info);
char			*readline(void);

#endif
