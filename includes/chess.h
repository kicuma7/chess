#ifndef CHESS_H
# define CHESS_H

# define WIDTH 900
# define HEIGH 900

# include <SDL2/SDL.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>



typedef struct  s_sdl
{
    SDL_Window  *window;
    SDL_Surface *screen;
}   t_sdl;

#endif