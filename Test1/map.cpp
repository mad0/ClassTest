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
}

void Map::DrawMap() {
	char tab[3] = { 176, 177, 178};
	while (y > 0){
		for (int z = 0; z < x; z++) {
			int r = (std::rand() % 3) + 0;
			std::cout << tab[r] << " ";
		}
			
	std::cout << "\n\n";
	y--;
	};
}

void Map::DrawInterface() {
}