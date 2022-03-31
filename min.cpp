#include"horloge.h"	
#include"min.h"
min::min(float x,float y,int r,int i=12):horloge(x,y,r){
	this->m=i;
}
		
int min::getposm(){		
	time_t tim = time(NULL);
	tm*g=gmtime(&tim);
     this->m =g->tm_min;
     return m;
		}
		
void min::dessin3(int m){
			float p=3.14;
			line(x,y,x+(rayon-50)*cos(m*(p/30)+3*p/2),y+(rayon-50)*sin(m*(p/30)+3*p/2));
		}
		
		
min::~min(){
			cout<<"detrui minute";
		}
