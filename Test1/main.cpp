#include "engine.h"

int main() {
	
	Engine *p = new Engine();
	Engine *c = new Engine();
	Engine *d = new Engine();
	delete p; delete d; delete c;
return 0;
}