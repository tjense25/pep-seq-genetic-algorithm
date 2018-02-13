#include "Motif.h"
#include "Constant.h"
#include<iostream>


int main(void) {
	Motif motif{4};
	std::cout << motif.str() << std::endl;
	return 0;
}
