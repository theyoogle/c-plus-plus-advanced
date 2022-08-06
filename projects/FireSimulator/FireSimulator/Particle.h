//
//  Particle.hpp
//  FireSimulator
//
//  Created by The YooGle on 06/08/22.
//

#ifndef Particle_h
#define Particle_h

#include <stdlib.h>
#include <math.h>

struct Particle {
    double x;
    double y;
    double speed;
    double angle;

    Particle() {
        x = 0;
        y = 0;
        
        angle = (2 * M_PI * rand()) / RAND_MAX;
        speed = (0.001 * rand()) / RAND_MAX;
    }
    
    void update() {
        double xSpeed = speed * cos(angle);
        double ySpeed = speed * sin(angle);
        
        x += xSpeed;
        y += ySpeed;
    }
};

#endif
