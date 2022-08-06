//
//  Screen.cpp
//  FireSimulator
//
//  Created by The YooGle on 05/08/22.
//

#include "Screen.h"

Screen::Screen() : window(NULL), renderer(NULL), texture(NULL), pixels1(NULL), pixels2(NULL) {
    
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
    pixels1 = new Uint32[N];
    pixels2 = new Uint32[N];
    memset(pixels1, 0, N * sizeof(Uint32));
    memset(pixels2, 0, N * sizeof(Uint32));
    
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

void Screen::update() {
    SDL_UpdateTexture(texture, NULL, pixels1, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);
}

void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {
    
    if (x<0 || x>=SCREEN_WIDTH || y<0 || y>=SCREEN_HEIGHT) {
        return;
    }
    
    Uint32 color = 0;

    color += red;
    color <<= 8;
    color += green;
    color <<= 8;
    color += blue;
    color <<= 8;
    color += 0xFF;
    
    pixels1[(SCREEN_WIDTH * y) + x] = color;
}

void Screen::close() {
    delete[] pixels1;
    delete[] pixels2;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Screen::boxBlur() {
    Uint32* temp = pixels1;
    pixels1 = pixels2;
    pixels2 = temp;
    
    for (int y=0; y<SCREEN_HEIGHT; y++) {
        for (int x=0; x<SCREEN_WIDTH; x++) {
            
//            0 0 0
//            0 1 0
//            0 0 0
            
            int redTotal = 0;
            int greenTotal = 0;
            int blueTotal = 0;
            
            for (int row=-1; row<=1; row++) {
                for (int col=-1; col<=1; col++) {
                    int currentX = x + col;
                    int currentY = y + row;
                    
                    if (currentX >= 0 && currentX < SCREEN_WIDTH && currentY >= 0 && currentY < SCREEN_HEIGHT) {
                        Uint32 color = pixels2[currentY * SCREEN_WIDTH + currentX];
                        
                        Uint8 red = color >> 24;
                        Uint8 green = color >> 16;
                        Uint8 blue = color >> 8;
                        
                        redTotal += red;
                        greenTotal += green;
                        blueTotal += blue;
                    }
                }
            }
            
            Uint8 red = redTotal/9;
            Uint8 green = greenTotal/9;
            Uint8 blue = blueTotal/9;
            
            setPixel(x, y, red, green, blue);
        }
    }
}
