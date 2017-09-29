#include <iostream>
#include <time.h>
#include "engine.h"

int main() {
	srand((unsigned int)time(NULL));
	Engine *p = new Engine();
	delete p;

	return 0;
}