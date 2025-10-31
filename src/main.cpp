#include <iostream>
#include <SDL3/SDL.h>

int main () {
  SDL_Init(SDL_INIT_VIDEO);

  std::cout << "Hello World!\n";

  SDL_Quit();
  return 0;
}

