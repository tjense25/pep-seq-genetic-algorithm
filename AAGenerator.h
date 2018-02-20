
#include<map>

#ifndef AA_GENERATOR_H
#define AA_GENERATOR_H
//AAGenerator generates a random anmino acid residue weighted by the frequency
//in which they appear in the peptide library
class AAGenerator
{
	private:
		std::map<char,double> charFreq;
		int freqCount;
		static AAGenerator* SINGLETON = NULL;
		AAGenerator() {};
		AAGenerator(AAGenerator const&) {};
		AAGenerator& operator=(AAGenerator const&) {};	
		void calculateResCount();
	public:
		static char const RESIDUES[] = "ACDEFGHIKLMNPQRSTVWY"; //all 20 AA symbols
		static int const RESIDUES_COUNT = 20; //20 AA in the residue char array
		static AAGenerator* getInstance();
		std::map<char,double> getCharFreq();
		void setCharFreqeuncy(std::map<char,double>);
		int getFreqCount();
		char getRes();
};
