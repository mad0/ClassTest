#include "engine.h"

int main() {
	Engine *wsk;
	Engine *p = new Engine(10);
	Engine *c = new Engine(11);

	delete c; delete p;
	
return 0;
}