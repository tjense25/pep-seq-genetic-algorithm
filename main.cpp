#include "MotifSet.h"
#include "Constant.h"
#include<iostream>
#include<random>


int main(void) {
	srand( time(NULL) ); //initialize random seed

	MotifSet* motifs = new MotifSet[POPULATION_SIZE/100];

	for (int i = 0; i < POPULATION_SIZE/100; i++) {
		std::cout << motifs[i].regexStr() << std::endl;
	}

	delete[] motifs;

	
	return 0;
}
