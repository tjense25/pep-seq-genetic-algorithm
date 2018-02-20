#include<string>
#include "MotifSet.h"

#ifndef PEP_LIBRARY_H
#define PEP_LIBRARY_H
class PepLibrary
{
	private:
		std::string toxPeps;
		int toxCount;
		std::string antiPeps;
		int antiCount;
		std::string neuPeps;
		int neuCount;
		static PepLibrary* SINGLETON; //Singleton pointer
		//Private constructors: Singleton Pattern!!
		PepLibrary(); 
		PepLibrary(PepLibrary const&);
		PepLibrary& operator=(PepLibrary const&);
	public:
		static PepLibrary* getInstance();
		void calculateFitness(MotifSet&);
		std::string getToxPeps();
		int getToxCount();
		std::string getAntiPeps();
		int getAntiCount();
		std::string getNeuPeps();
		int getNeuCount();
		void loadPeps(std::string libFileName);
};
#endif
