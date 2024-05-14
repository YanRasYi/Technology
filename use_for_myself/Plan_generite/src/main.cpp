#include <iostream>
#include "../include/Plan_generite.h"

int main() 
{
	Plan* p1 = new Plan("work", 1, 2, "¸ü¸Ä¿ò¼Ü", 0);
	p1->Plan_show_name();
	return 0;
}