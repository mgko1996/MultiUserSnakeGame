#pragma once
#include <Windows.h>
#include <vector>

#define WIDTH 100
#define HEIGHT 50

using namespace std;

class Snake
{
private:
	COORD pos;
	int vel;
	char dir;
	int len;
	vector<COORD> body;

public:
	Snake(COORD pos, int vel);

	void grow();
	void move_snake();
	void direction(char dir);

	vector<COORD> get_body();

	bool collided();
	bool eaten(COORD food);

	COORD get_pos();
};

