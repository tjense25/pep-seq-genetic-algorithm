#ifndef MOTIF_H
#define MOTIF_H
#include<vector>
#include<string>

class Motif
{
	private:
		int size;
		std::vector<int> positions;
		std::vector<char> residues;
	public:
		Motif(); //default constructor
		Motif(int size); //value constructor
		Motif(const Motif& m); //Copy constructor
		int getSize();
		std::vector<int> getPositions();
		std::vector<int> getResidues();
		char getResatPos(int pos);
		void changePos();
		void changeRes();
		std::string str();
};
#endif
