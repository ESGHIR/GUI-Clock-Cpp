#include"horloge.h"	
class sec : public horloge{
	
	int s;
	public:
		//constructr par defaut
		sec(int,int,int,int);
		//determination l'agauille de seconde
		int getposs();
		//dessiner
		void dessin(int);
		//deconstructeur
		~sec();	
};
