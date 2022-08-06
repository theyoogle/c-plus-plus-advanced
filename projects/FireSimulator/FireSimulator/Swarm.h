//
//  Swarm.hpp
//  FireSimulator
//
//  Created by The YooGle on 06/08/22.
//

#ifndef Swarm_h
#define Swarm_h

#include "Particle.h"

class Swarm {
public:
    const static int N = 5000;
    
    Swarm();
    ~Swarm();
    
    const Particle* const getParticles();
    void update();
    
private:
    Particle* particles;      // const pointer to particles
};

#endif /* Swarm_h */
