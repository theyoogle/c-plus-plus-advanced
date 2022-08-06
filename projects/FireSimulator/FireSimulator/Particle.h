//
//  Particle.hpp
//  FireSimulator
//
//  Created by The YooGle on 06/08/22.
//

#ifndef Particle_h
#define Particle_h

#include <stdlib.h>

struct Particle {
    double x;
    double y;
    double xSpeed;
    double ySpeed;

    Particle() {
        x = ((2.0 * rand()) / RAND_MAX) - 1;
        y = ((2.0 * rand()) / RAND_MAX) - 1;
        
        xSpeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);
        ySpeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);
    }
    
    void update() {
        x += xSpeed;
        y += ySpeed;
        
        if (x <= -1.0 || x >= 1.0) {
            xSpeed = -xSpeed;
        }
        
        if (y <= -1.0 || y >= 1.0) {
            ySpeed = -ySpeed;
        }
    }
};

#endif
