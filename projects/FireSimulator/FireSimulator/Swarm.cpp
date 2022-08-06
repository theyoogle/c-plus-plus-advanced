//
//  Swarm.cpp
//  FireSimulator
//
//  Created by The YooGle on 06/08/22.
//

#include "Swarm.h"

Swarm::Swarm() {
    particles = new Particle[N];
    lastTime = 0;
}

Swarm::~Swarm() {
    delete[] particles;
}

const Particle* const Swarm::getParticles() {
    return particles;
}

void Swarm::update(int elapsed) {
    int interval = elapsed - lastTime;
    for (int i=0; i<N; i++) {
        particles[i].update(interval);
    }
    lastTime = elapsed;
}
