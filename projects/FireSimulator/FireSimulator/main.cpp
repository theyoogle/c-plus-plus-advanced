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

int main(int argc, const char * argv[]) {
    
    Screen screen;
    if (screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }
    
    while (true) {
        // Update particles
        // Draw particles
        // Check for messages/events
        
        if (screen.processEvents() == false) {
            break;
        }
    }
    
    screen.close();
    return 0;
}
