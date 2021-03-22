#include<iostream>

#include "movenment.h"

/*particle*/

/*left, right, up, down*/

struct particle
{
	int x, y;
	short int query;
	
	void change_position (int first, int second)
	{
		x += first;
		y += second;
		return;
	}
};

/*particle*/

