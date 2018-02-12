#ifndef MOTIF_H
#define MOTIF_H
#include<vector>
class Motif
{
	private:
		int size;
		vecotr<int> positions;
		vector<char> residues;
	public:
		Motif(); //default constructor
		Motif(size); //value constructor
		Motif(Motif m); //Copy constructor
		int getSize();
		vector<int> getPositions();
		vector<int> getResidues();
		char getResatPos(int pos);
		void changePos();
		void changeRes();
};
#endif
