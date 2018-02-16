#include "Motif.h"
#include "Constant.h"
#include<sstream>
#include<iterator>
#include<algorithm>
#include<stdlib.h>
#include<time.h>

Motif::Motif() : Motif(4) {} //Delegating Constructor



Motif::Motif(unsigned int s) : size(s) {
	initializePos();
	initializeRes();
	updateString();
}

//Copy constructor
Motif::Motif(const Motif& that) : 
	size(that.size), positions(that.positions), residues(that.residues) {}


unsigned int Motif::getSize() {
	return this->size;
}

std::vector<int> Motif::getPositions() {
	return this->positions;
}

std::vector<char> Motif::getResidues() {
	return this->residues;
}

char Motif::getResAtPos(int pos) {
	for (unsigned int i = 0; i < this->positions.size(); i++) {
		if (positions[i] == pos) return residues[i];
	}
	return '.';
}

void Motif::changePos() {
	int rand_index = rand() % this->size; //generates random index to change
	int new_pos = rand() % PEP_LENGTH; //gets within the peptide
	while (std::find(positions.begin(), positions.end(), new_pos) != positions.end()) {
		new_pos = rand() % PEP_LENGTH; // choose new pos til its unique
	}
	this->positions[rand_index] = new_pos;
	updateString();
}

void Motif::changeRes() {
	int rand_index = rand() % PEP_LENGTH; //get random index to change
	char rand_res = RESIDUES[ (rand() % RESIDUES_COUNT) ];
	while (this->residues[rand_index] == rand_res) {
		rand_res = RESIDUES[ (rand() % RESIDUES_COUNT) ];
	}
	this->residues[rand_index] = rand_res;
	updateString();
}

void Motif::updateString() {
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
	this->string = os.str();
}

std::string Motif::str() {
	return this->string;
}

void Motif::initializePos() {
	positions.clear();
	while (this->positions.size() != this->size) {
		int pos = 0;
		do {
			pos = rand() % PEP_LENGTH;
		} while (std::find(positions.begin(), positions.end(), pos) != positions.end());

		positions.push_back(pos);
	}
	std::sort(positions.begin(), positions.end());
}

void Motif::initializeRes() {
	this->residues.clear();
	while (this->residues.size() != this->size) {
		this->residues.push_back(RESIDUES[ (rand() % RESIDUES_COUNT) ]);
	}
}

