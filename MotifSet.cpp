#include "MotifSet.h"
#include "Constant.h"
#include<sstream>

MotifSet::MotifSet() : MotifSet(10) {} //Delegating constructor. calls values constructor

MotifSet::MotifSet(int count) {
	this->count = count;
	this->pep_coverage = 0;
	this->motif_accuracy = 0;
	for (int i = 0; i < count; i++) {
		Motif* motif = new Motif();
		motifs.insert(motif);
	}
}

//copy constructor
MotifSet::MotifSet(const MotifSet& that) :
	motifs(that.motifs),
	pep_coverage(that.pep_coverage),
	motif_accuracy(that.motif_accuracy) {}

MotifSet::~MotifSet() {
	//while set isn't empty get beginning element, remove it from set, and
	//delete the motif pointer that was there
	while (! motifs.empty()) {
		auto itr = motifs.begin();
		motifs.erase(itr);
		delete *itr;
	}
}

int MotifSet::getCount() {
	return this->count;
}

std::set<Motif*> MotifSet::getMotifs() {
	return this->motifs;
}

double MotifSet::getPepCoverage() {
	return this->pep_coverage;
}

double MotifSet::getMotifAccuracy() {
	return this->motif_accuracy;
}

double MotifSet::getFitness() {
	return pep_coverage*motif_accuracy;
}

std::string MotifSet::str() {
	std::ostringstream os;
	for(auto itr = motifs.begin(); itr != motifs.end(); ++itr) {
		os << (*itr)->str() << std::endl;
	}
	return os.str();
}

