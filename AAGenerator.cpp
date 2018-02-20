#include "AAGenerator.h"


static AAGenerator* AAGenerator::getInstance() {
	if (! SINGLETON) {
		this->SINGLETON = new AAGenerator;
	}
	return this->SINGLETON;
}

std::map<char,double> AAGenerator::getCharFreq() {
	return this->charFreq;
}

void AAGenerator::setCharFreq(std::map<char,double> charMap) {
	this->charFreq = charMap;
	calculateFreqCount();
}

void AAGenerator::calculateFreqCount() {
	int total = 0;
	for (auto itr charFreq.begin(); itr != charFreq.end(); ++itr) {
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
