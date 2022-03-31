#include"horloge.h"
#include"date.h"
#include<time.h>
//construction par arguments
date::date(int a,int v,int c,int l,int k ,int m ,int n) : horloge(a,v,c){

 //jour
    njour=l;
    //mois
   nmois=k;
    //anné
     anne=m;
     //njour
	jour=n ;
	
}
//----------------------------------------------------------------------------------
	void date::dessin(int a){
		char * jr;
		char * mois;
		char msg[50];
	time_t tim = time(NULL);
	tm*g=gmtime(&tim);
 //jour
    njour=g->tm_wday;
    //mois
   nmois=g->tm_mon;
    //anné
     anne=g->tm_year+1900;
     //jor
	jour=g->tm_mday ;
	//les jours de semaine
	
			switch (njour)
		{
		
		case 0 : 
		jr="Dimanche";
		break;
		case 1 : jr="Lundi";
		break;
		case 2 : jr="Mardi";
		break;
		case 3 : jr="Merecredi";
		break;
		case 4 : jr="Jeudi";
		break;
		case 5 : jr="Vendredi";
		break;
		case 6 : jr="Samedi";
		break;
	}
	//les mois d'année
		switch(nmois){
			case 0 : 
			mois="Janvier";
			break;
			case 1 : 
			mois="Feverier";
			break;
			case 2 : 
			mois="Mars";
			break;
			case 3 : 
			mois="Avril";
			break;
			case 4 : 
			mois="Mai";
			break;
			case 5 : 
			mois="Juin";
			break;
			case 6 : 
			mois="Juillet";
			break;
			case 7 : 
			mois="Aout";
			break;
			case 8 : 
			mois="Septembre";
			break;
			case 9 : 
			mois="Octobre";
			break;
			case 10 : 
			mois="Novembre";
			break;
			case 11 : 
			mois="Decembre";
			break;
		}
			int r;
			r=rayon;
	
	
	    setcolor(3);
	    int k=8;
	    
	    if(getmaxy() < 410 || getmaxy() < 330 )
	    k=5;
	    else if(getmaxy() < 700 ||getmaxx() < 930 )
	    k=7;
	//affichage la date    
settextstyle(2,HORIZ_DIR,k);
	    sprintf(msg," %s  %d  %s  %d",jr,jour,mois,anne);
	outtextxy(x-5*r/6,rayon/8 ,msg);	
	}
	date::~date(){
		cout<<"date detrui";
	}
