//
//  Screen.cpp
//  FireSimulator
//
//  Created by The YooGle on 05/08/22.
//

#include "Screen.h"

Screen::Screen() : window(NULL), renderer(NULL), texture(NULL), pixels(NULL) {
    
}

bool Screen::init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return false;
    }
    
    window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        SDL_Quit();
        return false;
    }
    
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL) {
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }
    
    texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
    if (texture == NULL) {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return false;
    }
    
    int N = SCREEN_WIDTH * SCREEN_HEIGHT;
    Uint32* pixels = new Uint32[N];
    memset(pixels, 0, N * sizeof(Uint32));
    
    for (int i=0; i<N; i++) {
        pixels[i] = 0x0000FFFF;
    }
    
    SDL_UpdateTexture(texture, NULL, pixels, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
    
    return true;
}

bool Screen::processEvents() {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            return false;
        }
    }
    return true;
}

void Screen::close() {
    delete[] pixels;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
