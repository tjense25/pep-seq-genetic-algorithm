#include<fstream>
#include<regex>
#include<sstream>
#include<map>
#include<iostream>
#include "PepLibrary.h"
#include "AAGenerator.h"

PepLibrary *PepLibrary::SINGLETON = NULL;

PepLibrary::PepLibrary() : toxCount(0),
			   antiCount(0),
			   neuCount(0) {}

PepLibrary::PepLibrary(PepLibrary const& that) {}

PepLibrary& PepLibrary::operator=(PepLibrary const& that) {}

PepLibrary* PepLibrary::getInstance() {
	if (! SINGLETON) {
		SINGLETON = new PepLibrary();
	}
	return SINGLETON;
}

int countMatchInRegex(std::string s, std::string re) {
	std::regex words_regex(re);
        auto words_begin = std::sregex_iterator(
	s.begin(), s.end(), words_regex);
	auto words_end = std::sregex_iterator();

	return std::distance(words_begin, words_end);
}

void PepLibrary::calculateFitness(Motif& m) { 
	//Set regular expression to be regex from motif set
	std::string re (m.str());

	int toxMatches = countMatchInRegex(this->toxPeps, re);
	int antiMatches = countMatchInRegex(this->antiPeps, re);
	int neuMatches = countMatchInRegex(this->neuPeps, re);

	m.setPepCoverage(((double) toxMatches)/ this->toxCount);


	int totalMatched = toxMatches + antiMatches + neuMatches;
	m.setMotifAccuracy(((double) toxMatches) / totalMatched);
	
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
	std::map<char,int> charFreq;
	std::string pepseq;
	std::string toxicity;
	std::ostringstream toxos;
	std::ostringstream antios;
	std::ostringstream neuos;
	while (inFile >> pepseq) {
		//iterate through pepseq and update the charFreq map
		for(int i = 0; i < pepseq.size(); i++) {
			++charFreq[pepseq.at(i)];
		}

		//Iterate through next 7 columns till we reach toxicity score
		for (int i = 0; i < 8; i++) {
			inFile >> toxicity;
		}

		//depending on toxicity label, add pep to the correct stream
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

	AAGenerator::getInstance()->setCharFreq(charFreq);

	//convert ostringstreams to strings and store them in the correct
	//member varaible
	this->toxPeps = toxos.str();
	this->antiPeps = antios.str();
	this->neuPeps = neuos.str();
}
