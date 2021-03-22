#include<iostream>
#include<cmath>

#include "main_classes.h"
#include "movenment.h"
#include "introducing.h"

/*left right up down*/

int main()
{
	int a , b , c , d;
	std::cout << "grand" << std::endl;
	std::cin >> a >> b >> c >> d;
	
	particle part1;
	part1.change_position(a,b);
	

	int l[2] = {part1.x,part1.y};
	part1.change_position(1,d);
	int h[2] = {part1.x,part1.y};

/*pytanie czy faktycznie wskaźnik *(l+1) nie wybuchnie w pewnym momencie
 * jest lepszy sposób? -- to się okaże*/

	std::cout << "pos1: " << l[0] << ", " << l[1] << "   pos2: " << h[0] << ", " << h[1] << std::endl;
	return 0;
}

/*class of wandering particle*/

/*introducting*/

/*movenment*/

/*maybe randomization*/
