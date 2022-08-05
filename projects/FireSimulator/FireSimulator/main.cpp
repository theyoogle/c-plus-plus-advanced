//
//  main.cpp
//  FireSimulator
//
//  Created by The YooGle on 04/08/22.
//

#include <iostream>
#include <SDL.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL init failed." << endl;
        return 1;
    }
    cout << "SDL init success." << endl;
    
    SDL_Quit();
    return 0;
}
