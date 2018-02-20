#include "Motif.h"
#include<set>
#include<string>

#ifndef MOTIF_SET_H
#define MOTIF_SET_H
class MotifSet {
	private:
		std::set<Motif*> motifs; //Set of motifs
		int count; //Number of motifs in the motif set
		double pep_coverage; //percentage of toxic motifs that are covered by motifs
		double motif_accuracy; //percentage of all motifs that are mapped by the MotifSet that are toxic
	public:
		MotifSet(); //Default Constructor
		MotifSet(int count); //value constructor
		MotifSet(const MotifSet& that); //copy constructor
		~MotifSet(); //Destructor
		int getCount();
		std::set<Motif*> getMotifs();
		void setPepCoverage(double);
		double getPepCoverage();
		void setMotifAccuracy(double);
		double getMotifAccuracy();
		double getFitness();
		std::string str();
		std::string regexStr();
};
#endif
