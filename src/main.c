#include "../includes/chess.h"

int main(int ac, char *av[])
{
    t_sdl   sdl;

    (void)ac;
    (void)av;
    sdl.window = SDL_CreateWindow("My First", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGH, SDL_WINDOW_SHOWN);
    sdl.screen = SDL_GetWindowSurface(sdl.window);
    SDL_Delay(2000);
    SDL_DestroyWindow(sdl.window);
    SDL_Quit();
}