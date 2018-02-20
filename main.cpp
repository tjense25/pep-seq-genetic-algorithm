#include "MotifSet.h"
#include "PepLibrary.h"
#include "Constant.h"
#include<iostream>
#include<random>


int main(void) {
	srand( time(NULL) ); //initialize random seed
	
	PepLibrary* pepLib = PepLibrary::getInstance();
	pepLib->loadPeps("../filtered.tsv");

	MotifSet* motifs = new MotifSet[POPULATION_SIZE/10];

	for (int i = 0; i < POPULATION_SIZE/10; i++) {
		std::cout << motifs[i].getFitness() << std::endl;
	}

	delete[] motifs;

	
	return 0;
}
