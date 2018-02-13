#include "Motif.h"
#include "Constant.h"
#include<iostream>
#include<random>
#include<iterator>
#include<algorithm>
#include<stdlib.h>
#include<time.h>

Motif::Motif() : Motif(4) {} //Delegating Constructor



Motif::Motif(int s) : size(s) {
	this->positions = std::vector<int>();
	this->residues = std::vector<char>();
	std::sample(PEP_POSITIONS.begin(), PEP_POSITIONS.end(),
			std::back_inserter(positions), s,
			std::mt19937{std::random_device{}()});
	std::sample(RESIDUES.begin(), RESIDUES.end(),
			std::back_insterter(residues), s,
			std::mt19937{std::random_device{}()});
}

//Copy constructor
Motif::Motif(Motif that) : 
	size(that.size), positions(that.positions), residues(that.residues)
	{}

int Motif::getSize() {
	return this->size;
}

std::vector<int> Motif::getPositions() {
	return this->positions;
}

std::vector<char> Motif::getResidues() {
	return this->residues;
}

char Motif::getResAtPos(int pos) {
	for (int i = 0; i < this->positions.size(); i++) {
		if (positions[i] == pos) return residues[i];
	}
	return '.';
}

void Motif::changePos() {
	srand( time(NULL) ); //initializing random seed

	int rand_index = rand() % this->s; //generates random index to change
	int new_pos = rand() % PEP_LENGTH; //gets within the peptide
	while (std::find(positions.begin(), positions.end(), new_pos) != positions.end()) {
		new_pos = rand() % PEP_LENGTH; // choose new pos til its unique
	}
	this->positions[rand_index] = new_pos;
}

void Motif::changeRes() {
	srand( time(NULL) ); //initialize random seed

	int rand_index = rand() % PEP_LENGTH; //get random index to change
	char rand_res = RESIDUES[ (rand() % RESIDUES_COUNT) ];
	while (this->residues[rand_index] == rand_res) {
		rand_res = RESIDUES[ (rand() % RESIDUES_COUNT) ];
	}
	this->residues[rand_index] = rand_res;
}

std::string Motif::str() {
	std::ostringstream os;
	int pos_index  = 0;
	for (int i = 0; i < PEP_LENGTH; i++) {
		if (i == positions[pos_index] ) {
			os << residues[pos_index];
			pos_index++;
		} else {
			os << ".";
		}
	}
	os << endl;
	return os.str();
}
