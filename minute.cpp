#include"horloge.h"	
#include"minute.h"
//constructeur par defaut
minute::minute(int x,int y,int r,int i):horloge(x,y,r){
	this->m=i;
}
//extraire le minute a l'aide de biblio time.h		
int minute::getposminute(){		
	time_t tim = time(NULL);
	tm*g=gmtime(&tim);
     this->m =g->tm_min;
     return m;
		}
		//dessiner l'aguille de minute
 void minute::dessin(int m){
			float p=3.14;
				    setcolor(1);
			line(x,y,x+(rayon-rayon/3)*cos(m*(p/30)+3*p/2),y+(rayon-rayon/3)*sin(m*(p/30)+3*p/2));
		}
		
		//deconstructeur
minute::~minute(){
			cout<<"detrui minute";
		}
