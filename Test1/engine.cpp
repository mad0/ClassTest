#include "engine.h"
#include <iostream>

int Engine::a = 0;

Engine::Engine(int id ) : id(id){
	a++;
	std::cout << "Engine object: " << a << "\n";
	std::cout <<"Object ID: "<<id<<" start..."<<"\n\n";
}

Engine::~Engine() {
	std::cout << "Object ID: "<<id<<" stop..." << "\n";
}