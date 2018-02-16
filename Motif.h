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
		std::string str();
};
#endif
