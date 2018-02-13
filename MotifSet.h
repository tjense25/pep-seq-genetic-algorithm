#ifndef MOTIF_SET_H
#define MOTIF_SET_H
#include<set>

class MotifSet {
	private:
		std::set<Motif*> motifs; //Set of motifs
		int count; //Number of motifs in the motif set
		double pep_coverage; //percentage of toxic motifs that are covered by motifs
		double motif_accuracy; //percentage of all motifs that are mapped by the MotifSet that are toxic
		double fitness; //fitness value for motif set fitness = pep_coverage*motif_accuracy
	public:
		MotifSet(); //Default Constructor
		MotifSet(unsigned int count); //value constructor
		Motif(const MotifSet& ms); //copy constructor
		unsigned int get
			MotifSet(); //Default Constructor
			MotifSet(unsigned int count); //value constructor
			Motif(const MotifSet& ms); //copy constructor
			unsigned int getCount();
			std::motif<Motif*> getMotifs();
			double getPepCoverage();
			double getMotifAccuracy();
			double getFitness();

};
#endif
