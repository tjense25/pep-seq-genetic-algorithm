#ifndef MOTIF_H
#define MOTIF_H
#include<vector>
#include<string>

class Motif
{
	private:
		unsigned int size;
		std::vector<int> positions;
		std::vector<char> residues;
		std::string string;
		double pep_coverage; //percentage of toxic motifs that are covered by motifs
		double motif_accuracy; //percentage of all motifs that are mapped by the MotifSet that are toxic
		void initializePos();
		void initializeRes();
		void updateString();
	public:
		Motif(); //default constructor
		Motif(unsigned int size); //value constructor
		Motif(const Motif& m); //Copy constructor
		unsigned int getSize();
		std::vector<int> getPositions();
		std::vector<char> getResidues();
		char getResAtPos(int pos);
		void changePos();
		void changeRes();
		void setPepCoverage(double);
		double getPepCoverage();
		void setMotifAccuracy(double);
		double getMotifAccuracy();
		double getFitness();
		std::string str();
};
#endif
