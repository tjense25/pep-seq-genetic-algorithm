#include "Motif.h"
#include "Constant.h"
#include<iostream>
#include<random>


int main(void) {
	srand( time(NULL) ); //initialize random seed

	Motif* motifs[POPULATION_SIZE];
	for (int i = 0; i < POPULATION_SIZE; i++) {
		motifs[i] = new Motif{4};
	}
	for (int i = 0; i < POPULATION_SIZE; i++) {
		std::cout << motifs[i]->str() << std::endl;
	}
	return 0;
}
