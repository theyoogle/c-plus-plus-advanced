//
//  Screen.hpp
//  FireSimulator
//
//  Created by The YooGle on 05/08/22.
//

#ifndef Screen_h
#define Screen_h

#include <SDL.h>

class Screen {
public:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;
    
    Screen();
    
    bool init();
    bool processEvents();
    void update();
    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    void close();
    void boxBlur();
    
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    Uint32* pixels1;
    Uint32* pixels2;
    SDL_Event event;
};

#endif /* Screen_h */
