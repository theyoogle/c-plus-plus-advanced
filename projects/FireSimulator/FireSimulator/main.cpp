//
//  main.cpp
//  FireSimulator
//
//  Created by The YooGle on 04/08/22.
//

#include <iostream>
#include <SDL.h>
#include <math.h>

#include "Screen.h"
#include "Swarm.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Screen screen;
    if (screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }
    
    Swarm swarm;
    
    while (true) {
        
        int elapsed = SDL_GetTicks();
        int red = (1 + sin(elapsed * 0.0001)) * 128;
        int green = (1 + sin(elapsed * 0.0002)) * 128;
        int blue = (1 + sin(elapsed * 0.0003)) * 128;
        
        swarm.update(elapsed);
        
        const Particle* const particles = swarm.getParticles();
        for (int i=0; i<Swarm::N; i++) {
            Particle particle = particles[i];
            
            int x = (particle.x + 1) * Screen::SCREEN_WIDTH/2;
            int y = particle.y * Screen::SCREEN_WIDTH/2 + Screen:: SCREEN_HEIGHT/2;
            
            screen.setPixel(x, y, red, green, blue);
        }
        
        screen.boxBlur();
        
        screen.update();
        
        if (screen.processEvents() == false) {
            break;
        }
    }
    
    screen.close();
    return 0;
}
