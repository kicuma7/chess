#include "../includes/chess.h"

void    free_exit(t_chess *mlx)
{
    mlx_destroy_window(mlx->ptr, mlx->win);
    mlx_destroy_display(mlx->ptr);
    free(mlx->ptr);
    exit(EXIT_SUCCESS);
}