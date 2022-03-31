#include"horloge.h"
class heure : public horloge{
	int h;

	
	public:
		//constructr par defaut
		heure(int,int,int,int);
		//determination l'agauille de l'heure
		int setposh();
		void getposh();
		//dessiner
		void dessin(int);
		//deconstructeur
		~heure();
	
	
};
