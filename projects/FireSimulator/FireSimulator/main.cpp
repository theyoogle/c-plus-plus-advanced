//
//  main.cpp
//  FireSimulator
//
//  Created by The YooGle on 04/08/22.
//

#include <iostream>
using namespace std;

#include <SDL.h>
#include "Screen.h"
#include <math.h>

int main(int argc, const char * argv[]) {
    
    Screen screen;
    if (screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }
    
    while (true) {
        
        int elapsed = SDL_GetTicks();
        int red = (1 + sin(elapsed * 0.0001)) * 128;
        int green = (1 + sin(elapsed * 0.0002)) * 128;
        int blue = (1 + sin(elapsed * 0.0003)) * 128;
        
        for (int y=0; y<Screen::SCREEN_HEIGHT; y++) {
            for (int x=0; x<Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, red, green, blue);
            }
        }
        
        screen.update();
        
        if (screen.processEvents() == false) {
            break;
        }
    }
    
    screen.close();
    return 0;
}
