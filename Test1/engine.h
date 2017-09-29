#pragma once
#include "map.h"

class Engine {
	static int a;
	int id;
	Map *m;
public:
	Engine();
	~Engine();
	int returnId();
};

