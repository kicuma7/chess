#include "../includes/chess.h"

int key_hook(int key_pressed, t_chess *mlx)
{
    (void)mlx;
    printf("%d\n", key_pressed);
    if (key_pressed == ESC)
        free_exit(mlx);
    return (0);
}

int main(void)
{
    t_chess mlx;

    mlx.ptr = mlx_init();
    mlx.win =  mlx_new_window(mlx.ptr, WIDITH, HEIGH, "Xadrez");
    mlx_key_hook(mlx.win, key_hook, &mlx);
    mlx_loop(mlx.ptr);
}