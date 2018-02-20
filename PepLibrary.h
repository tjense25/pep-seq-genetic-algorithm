#include<string>
#include "MotifSet.h"

#ifndef PEP_LIBRARY_H
#define PEP_LIBRARY_H
class PepLibrary
{
	private:
		std::string toxPeps;
		int toxCount = 0;
		std::string antiPeps;
		int antiCount = 0;
		std::string neuPeps;
		int neuCount = 0;
		//Private constructors: Singleton Pattern!!
		PepLibrary() {}; 
		PepLibrary(PepLibrary const&) {};
		PepLibrary& operator=(PepLibrary const&) {};
		static PepLibrary* SINGLETON = NULL; //Singleton pointer
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
