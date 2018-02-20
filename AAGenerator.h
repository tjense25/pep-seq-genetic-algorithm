
#include<map>

#ifndef AA_GENERATOR_H
#define AA_GENERATOR_H
//AAGenerator generates a random anmino acid residue weighted by the frequency
//in which they appear in the peptide library
class AAGenerator
{
	private:
		std::map<char,int> charFreq;
		int freqCount;
		static AAGenerator* SINGLETON;
		AAGenerator();
		AAGenerator(AAGenerator const&);
		AAGenerator& operator=(AAGenerator const&);	
		void calculateFreqCount();
		char getUnweightedRes();
		char getWeightedRes();
	public:
		static AAGenerator* getInstance();
		std::map<char,int> getCharFreq();
		void setCharFreq(std::map<char,int> const&);
		int getFreqCount();
		char getRes();
};
#endif
