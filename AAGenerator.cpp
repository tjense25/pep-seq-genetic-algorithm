#include "AAGenerator.h"

AAGenerator *AAGenerator::SINGLETON = NULL;

AAGenerator::AAGenerator() : freqCount(0) {}

AAGenerator::AAGenerator(AAGenerator const& that) {}

AAGenerator& AAGenerator::operator=(AAGenerator const& that) {}

AAGenerator* AAGenerator::getInstance() {
	if (! SINGLETON) {
		SINGLETON = new AAGenerator;
	}
	return SINGLETON;
}

std::map<char,int> AAGenerator::getCharFreq() {
	return this->charFreq;
}

void AAGenerator::setCharFreq(std::map<char,int> const& charMap) {
	this->charFreq = charMap;
	calculateFreqCount();
}

void AAGenerator::calculateFreqCount() {
	int total = 0;
	for (auto itr = charFreq.begin(); itr != charFreq.end(); ++itr) {
		total += itr->second;
	}
	this->freqCount = total;
}

int AAGenerator::getFreqCount() {
	return this->freqCount;
}

char AAGenerator::getRes() {
	if (charFreq.empty()) return getUnweightedRes();
	else return getWeightedRes();
}

char AAGenerator::getUnweightedRes() {
	const int RESIDUES_COUNT = 20; //20 AA in the residue char array
	const char RESIDUES[] = "ACDEFGHIKLMNPQRSTVWY"; //all 20 AA symbols
	return RESIDUES[ (rand() % RESIDUES_COUNT) ];
}

char AAGenerator::getWeightedRes() {
	int r = rand() % freqCount;
	int total = 0;
	for (auto itr = charFreq.begin(); itr != charFreq.end(); ++itr) {
		total += itr->second;
		if (r < total) {
			return itr->first;
		}
	}
	return 0;
}
