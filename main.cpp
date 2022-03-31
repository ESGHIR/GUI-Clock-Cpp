
#include"heure.h"
#include"minute.h"
#include"sec.h"
#include"date.h"
#include<time.h>
using namespace std;
//---------fonction dessin le joue--------------------------------------------------------------------------
void joue(int x,int y , int r,int i){
		
	float pi=3.14;
	setcolor(3);
	circle(x,y,r);
	circle(x,y,r/4);
	line(x,y,x+r*cos(0*pi/3),y-r*sin(0*pi/3));
	line(x,y,x+r*cos(4*pi/3),y-r*sin(4*pi/3));
	line(x,y,x+r*cos(2*pi/3),y-r*sin(2*pi/3));
	if(i==1){
		setfillstyle(SOLID_FILL,WHITE);
floodfill(x+r*cos(pi/3)/2,y-r*sin(pi/3)/2,3);
	}
	else if(i==2){
		setfillstyle(SOLID_FILL,WHITE);
floodfill(x+r*cos(-pi)/2,y-r*sin(-pi)/2,3);
	}
	else if(i==3){
		setfillstyle(SOLID_FILL,WHITE);
floodfill(x+r*cos(3*pi/2)/2,y-r*sin(3*pi/2)/2,3);
	}
}
//------------------------------------------------------------------------------------------------------

int main(){
	int max=0;
		int k=1,l=2;
	initwindow(1000,1000,"clock");
	while(true){
		// determination le centre de fenetre
		int x1=(int) getmaxx()/2;
		int y1=(int)getmaxy()/2;
	if(getmaxy() >= getmaxx())
	max=getmaxx();
	else
	max=getmaxy();
	//calcule le rayon
		int r1=(int)max/3;
		// declaration des variables
        date dat(x1,y1,r1,1,1,1,1);
		horloge hor(x1,y1,r1);
		heure h(x1,y1,r1,0);
		sec s(x1,y1,r1,1);
		minute m(x1,y1,r1,1 );
	hor.setx(x1);
	hor.sety(y1);
	hor.setr(r1);
	//affichage l'horloge
	hor.dessin((int)max/3);
	//dessin la divesion de heures et les minutes de l'horloge
	hor.div();
	//dessin heures
   h.dessin(h.setposh());
   //dessin seconde
	s.dessin(s.getposs());
	//dessin minute
	m.dessin(m.getposminute());
dat.dessin(0);

//-------------------------------------------------------affichage le joue
if(k>3)
k=1;
if(l>3)
l=1;
//---------------------------------------------------------------en haut
//------------droite 
		joue((int) x1-r1*(3/2) -3* r1/9, (int) r1/11+r1/8, (int) r1/9,k);
//------------gauche
			joue((int) x1+r1*(3/2)+3* r1/9, (int) r1/11+r1/8, (int) r1/9,l);
//------------------------------------------------------------- en desous
//------------droite
			joue((int) x1-r1*(3/2) -3* r1/9, (int) y1+r1*5/4-r1/8, (int) r1/9,l);
//------------gauche
				joue((int) x1+r1*(3/2)+3* r1/9, (int) y1+r1*5/4-r1/8, (int) r1/9,k);		
		delay(1000);
		k++;
		l++;	
		cleardevice();
	}
	getch();
	return 1;
}
