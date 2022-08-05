//
//  main.cpp
//  FireSimulator
//
//  Created by The YooGle on 04/08/22.
//

#include <iostream>
using namespace std;

#include <SDL.h>

int main(int argc, const char * argv[]) {
    
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL init failed." << endl;
        return 1;
    }
    cout << "SDL init success." << endl;
    
    SDL_Window* window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    
    if (window == NULL) {
        cout << "Could not create window." << endl;
        SDL_Quit();
        return 2;
    }
    
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL) {
        cout << "Could not create renderer." << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }
    
    SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
    if (texture == NULL) {
        cout << "Could not create texture." << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }
    
    Uint32* pixels = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
    
    memset(pixels, 0xFF, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
    
    SDL_UpdateTexture(texture, NULL, pixels, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    
    bool quit = false;
    SDL_Event event;
    
    while (!quit) {
        // Update particles
        // Draw particles
        // Check for messages/events
        
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }
    
    delete[] pixels;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
