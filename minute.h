#include"horloge.h"	
class minute : public horloge{
	int m;

	
	public:
		//constructr par defaut
		minute(int ,int ,int ,int );
		//determination l'agauille de minute
		int getposminute();
		//dessiner
		void dessin(int );
		//deconstructeur
		~minute();
	
	
};
