#include <iostream>
#include <cstdlib>
#include "map.h"


Map::Map(int a, int b) : x(a), y(b) {
	std::cout << "Draw map... and interface\n";
	// Interface up
	//std::cout << "     ";
	//for (int i=0;i<70;i++)
	//	std::cout << char(205); std::cout << "\n";
	//Interface middle
	//std::cout << "       HP: " << x << "     \n";
	//Interface down
	//std::cout << "     ";
	//for (int i = 0; i<70; i++)
	//	std::cout << char(205); std::cout << "\n";

	
	
}
Map::~Map() {
	std::cout << "Niszcze tab...\n";
}

void Map::DrawMap() {
	char tab[2] = {255, 88};
	while (y > 0){
		char *randTab = new char[x];
		for (int z = 0; z < x; z++) {
			randTab[z] = tab[(std::rand() % 2) + 0];
			std::cout << randTab[z] << randTab[z];
		}
		std::cout << "\n";
		for (int z = 0; z < x; z++) {
			std::cout << randTab[z] << randTab[z];
		}
	std::cout << "\n";
	delete randTab;
	y--;
	}
}

void Map::DrawInterface() {
}