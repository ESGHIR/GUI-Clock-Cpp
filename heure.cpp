#include"horloge.h"	
#include"heure.h"
//constructeur par defaut
heure::heure(int x,int y,int r,int h) : horloge(x,y,r){
	this->h=h;
}
	//extraire le minute a l'aide de biblio time.h		
		int heure::setposh(){
			time_t tim = time(NULL);
	tm*g=gmtime(&tim);
     this->h =g->tm_hour + 1;
     return h;	
			
		}
	//dessiner l'aguille de l'heure
		void heure::dessin(int h){
				float p=3.14;
				time_t tim = time(NULL);
	tm*g=gmtime(&tim);
     int m =g->tm_min;
					    setcolor(GREEN);
			line(x,y,x+(rayon-rayon/2)*cos(h*(p/6)+3*p/2+m*(p/360)),y+(rayon-rayon/2)*sin(h *(p/6)+3*p/2+m*(p/360)));	
			
		}
		//deconstructeur
		heure::~heure(){
			cout<<"detrui heure";		
		}
		
