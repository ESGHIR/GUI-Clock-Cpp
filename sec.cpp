#include"horloge.h"			
#include"sec.h"			
		
		sec::sec(int x,int y,int r ,int j):horloge(x,y,r){
			this->s=j;	
		}
		
	int sec::getposs(){
	//detmination le seconde a l'aide biblio time.h		
	time_t tim = time(NULL);
	tm*g=gmtime(&tim);
    this->s =g->tm_sec;
    return s;
		}
	
		void sec::dessin(int s){
			//dessiner l'aguille de seconde
			float	p=3.14;
				    setcolor(RED);
			line(x,y,x+(rayon-rayon/5)*cos(s*(p/30)+3*p/2),y+(rayon-rayon/5)*sin(s *(p/30)+3*p/2));
			
			
		}
		sec::~sec(){
			cout<<"detrui seconde";
		}
	
