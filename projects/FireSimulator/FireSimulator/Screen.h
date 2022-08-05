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
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    
    Screen();
    
    bool init();
    bool processEvents();
    void close();
    
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    Uint32* pixels;
    SDL_Event event;
};

#endif /* Screen_h */
