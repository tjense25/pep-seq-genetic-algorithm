#include<fstream>
#include<regex>
#include<sstream>
#include "PepLibrary.h"
#include "AAGenerator.h"

static PepLibrary* PepLibrary::getInstance() {
	if (! this->SINGLETON) {
		this->SINGLETON = new PepLibrary();
	}
	return this->SINGLETON;
}

void PepLibrary::calculateFitness(MotifSet& ms) {
	//Set regular expression to be regex from motif set
	std::regex re (ms.regexStr());

	//use regex to match all tox peptides and store in toxMatch object
	std::cmatch toxMatch;
	std::regex_match (this->toxPeps, toxMatch, re);

	//use regex to match all antitoxic peptides
	std::cmatch antiMatch;
	std::regex_match(this->antiPepes, antiMatch, re);
	
	//use regex to match all neutral peptides
	std::cmatch neuMatch;
	std::regex_match(this->neuPeps, neuMatch, re);

	ms.setPepCoverage(((double) toxMatch.size()) / this->toxCount);

	int totalMatched = toxMatch.size() + antiMatch.size(); + neuMatch.size();
	ms.setMotifAccuracy(((double) toxMatch.size()) / totalMatched);
}

std::string PepLibrary::getToxPeps() {
	return this->toxPeps;
}

int PepLibrary::getToxCount() {
	return this->toxCount;
}

std::string PepLibrary::getAntiPeps() {
	return this->antiPeps;
}

int PepLibrary::getAntiCount() {
	return this->antiCount;
}

std::string PepLibrary::getNeuPeps() {
	return this->neuPeps;
}

int PepLibrary::getNeuCount() {
	return this->neuCount;
}

void PepLibrary::loadPeps(std::string libFileName) {
	
	std::ifstream inFile;
	inFile.open(libFileName);	
	 
	//Check if InFile exists, if it doesn't stop program
	if(!inFile) {
		std::cerr << "Unable to open file " << libFileName << std::endl;
		exit(1);
	}

	//Iterate through pepLibrary file and store pepSeqeunce in either the
	//toxic, antitoxic, or neutral output stringstream
	std::string pepseq;
	std::string toxicity;
	std::ostringstream toxos;
	std::ostringstream antios;
	std::ostringstram neuos;
	while (inFile >> pepseq) {
		for (int i = 0; i < 8; i++) {
			inFile >> toxicity;
		}
		if (toxicity == "toxic") {
			toxos << pepseq << std::endl;
			this->toxCount++;
		} else if (toxicity == "anti-toxic") {
			antios << pepseq << std::endl;
			this->antiCount++;
		} else {
			neuos << pepseq << std::endl;
			this->neuCount++;
		}
	}

	//convert ostringstreams to strings and store them in the correct
	//member varaible
	this->toxPeps = toxos.str();
	this->antiPeps = antiox.str();
	this->neuPeps = neuos.str();
}