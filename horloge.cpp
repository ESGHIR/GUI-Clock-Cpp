#include"horloge.h"	
//construction par arguments
horloge::horloge(int x,int y ,int r){
	this->x=x;
	this->y=y;
	this->rayon=r;	
}
//-------------------------------------------------------------------------------------------
void horloge::dessin(int r){
    //Grande cercle	
setcolor(RED);
	circle(x,y,rayon);
	setfillstyle(10,BLUE);
	floodfill(x+(rayon-20)*cos(0),y+(rayon-20)*sin(0),RED);
	//petite cercle
setcolor(BLUE);	
	circle(x,y,(int)rayon/20);
	setfillstyle(SOLID_FILL,BLUE);
    floodfill(x,y,BLUE);
    //Cadre
    setcolor(3);	
    line(x-rayon*3/2,rayon/11,x-rayon*3/2,y+rayon*5/4);
      line(x+rayon*3/2,rayon/11,x+rayon*3/2,y+rayon*5/4);
     line(x+rayon*3/2,rayon/11,x-rayon*3/2,rayon/11);
     line(x+rayon*3/2,y+rayon*5/4,x-rayon*3/2,y+rayon*5/4);
}
//----------------------------------------------------------------------------------------------
void horloge::setx(int a){
	this->x=a;
}
//----------------------------------------------------------------------------------------------
	 	void horloge::sety(int b){
	 		this->y=b;
	 		
		 }
//-----------------------------------------------------------------------------------------------
	 	void horloge::setr(int r){
	 		this->rayon=r;
		 }
//-----------------------------------------------------------------------------------------------
void horloge::div(){
	float p=3.14;
	int i,k;
	char msg[20];
			for( i=0;i<12;i++){
				//subdivision des heures
		line(x+(rayon-20)*cos(i*(p/6)+2*p/3),y+(rayon-20)*sin(i*(p/6)+2*p/3),x+rayon*cos(i*(p/6)+2*p/3),y+rayon*sin(i*(p/6)+2*p/3));
		 }
		 //remplissage des heurs
	for( i=0;i<12;i++){
	k=i+12;
		if(k>=13)
		k=k-12;
		setcolor(7);
		settextstyle(3,HORIZ_DIR,2);
sprintf(msg,"%d",k);
  if(i<6)
	outtextxy(x+(rayon-rayon/5)*cos(i*(p/6)+(3*p/2)-(p/60)),y+(rayon-rayon/5)*sin(i*(p/6)+(3*p/2)-(p/60)),msg);
	
	else
		outtextxy(x+(rayon-rayon/5)*cos(i*(p/6)+(3*p/2)+(p/60)),y+(rayon-rayon/5)*sin(i*(p/6)+(3*p/2)+(p/60)),msg);
	}
	//subdivision des minutes
	for(i=0;i<60;i++){
		
			line(x+(rayon-10)*cos(i*(p/30)+2*p/3),y+(rayon-10)*sin(i*(p/30)+2*p/3),x+rayon*cos(i*(p/30)+2*p/3),y+rayon*sin(i*(p/30)+2*p/3));
	}
	//cadre de cercle
	for(int i=0;i<=30;i++){
		setcolor(3);
	circle(x,y,rayon+i/3);
	}
}
//----------------------------------------------------------------------------------------------------------------------
//desconstructeur
 horloge::~horloge(){
 	cout<<"horloge est detrui";
 }
