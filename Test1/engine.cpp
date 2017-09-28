#include "engine.h"
#include <iostream>

int Engine::a = 0;

Engine::Engine() {
	a++;
	std::cout <<"Engine"<<a<<" start..."<<"\n";
}

Engine::~Engine() {
	std::cout << "Engine"<<a<<" stop..." << "\n";
	a--;
}