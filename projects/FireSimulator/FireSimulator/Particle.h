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
private:
    double speed;
    double angle;

public:
    double x;
    double y;
    
    Particle() {
        init();
    }
    
    void init() {
        x = 0;
        y = 0;
        
        angle = (2 * M_PI * rand()) / RAND_MAX;
        speed = (0.04 * rand()) / RAND_MAX;
        
        speed *= speed;
    }
    
    void update(int interval) {
        angle += interval * 0.0003;
        
        double xSpeed = speed * cos(angle);
        double ySpeed = speed * sin(angle);
        
        x += xSpeed * interval;
        y += ySpeed * interval;
        
        if (x < -1 || x > 1 || y < -1 || y > 1) {
            init();
        }
        
        if (rand() < RAND_MAX/100) {
            init();
        }
    }
};

#endif
