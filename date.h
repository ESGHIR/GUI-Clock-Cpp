#include"horloge.h"
class date : public horloge {
//	les attributs de date
	int jour;
	int nmois;
	int  njour,anne;
	public : 
	//constructeur par defauts
	date(int,int,int,int,int,int,int);
	//affichade 
	void dessin(int);
	//deconstructeur
	~date();
	
};
