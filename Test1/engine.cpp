#include "engine.h"
#include <iostream>

int Engine::a = 0;

Engine::Engine() : id(a){
	a++;
	std::cout << "Engine object: " << a << "\n";
	std::cout << "Object ID: "<<id<<" start..."<<"\n\n";
	m = new Map(20, 10);
	m->DrawMap();
}

Engine::~Engine() {
	std::cout << "Object ID: "<<id<<" stop..." << "\n";
	a--;
	std::cout << "Engine object: " << a<< " stop..." << "\n";
	delete m;
}

int Engine::returnId() {
	return id;
}