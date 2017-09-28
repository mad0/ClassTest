#include <iostream>
#include "engine.h"

int main() {
	Engine *wsk;
	Engine *p = new Engine();
	Engine *c = new Engine();
	wsk = p;
	std::cout << "=============================\n";
	std::cout << "ID object: "<<wsk->returnId() << "\n";
	std::cout << "=============================\n\n\n\n";
	delete p; delete c;
	
return 0;
}