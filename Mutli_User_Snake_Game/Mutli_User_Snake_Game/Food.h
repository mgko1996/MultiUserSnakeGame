#pragma once

#include <Windows.h>
#include <cstdlib>

#define WIDTH 100
#define HEIGHT 50

class Food
{
private:
	COORD pos;

public:
	void gen_food();

	COORD get_pos();
};
