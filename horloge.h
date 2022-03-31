#ifndef _Horloge_
#define _Horloge_
#include<graphics.h>
#include<time.h>
#include<math.h>
#include<iostream>
using namespace std;

 class horloge{
 	protected:
 		int rayon;
 		int x;
 		int y;
 	
	 public:
	 	//constructeur par arguments
	 	horloge(int,int,int);
	 	//constructeur par defaut
	 	horloge();
	 	//pour les devisions de l'horloge
	 	void div();
	 	//entrer valeur x
	 	void setx(int);
	 	//entrer valeur Y
	 	void sety(int);
	 	//entrer la rayon R
	 	void setr(int);
	 	~horloge();
	 	//dessin le cadre
	 	virtual	void dessin(int);
	 	//le joue definie en fonction main
	 	friend void joue();
 }; 
 #endif
