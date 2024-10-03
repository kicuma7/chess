#ifndef CHESS_H
# define CHESS_H

# include "../libs/minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <fcntl.h>

# define WIDITH 500
# define HEIGH  500
# define ESC    65307

typedef struct t_chess
{
    void    *win;
    void    *ptr;
}       t_chess;

void    free_exit(t_chess *mlx);

#endif