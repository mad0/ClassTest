#pragma once

class Map {
private:
	int x, y;
public:
	Map(int,int);
	~Map();
	void DrawInterface();
	void DrawMap();
};