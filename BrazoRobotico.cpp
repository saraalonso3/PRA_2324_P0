#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico(double x, double y, double z){
	this->x=x;
	this->y=y;
	this->z=z;
}

double BrazoRobotico::getX(){
	return x;
}

double BrazoRobotico::getY(){
	return y;
}

double BrazoRobotico:: getZ(){
	return z;
}

bool BrazoRobotico::getsujetandoObjeto(bool sujetandoObjeto){
	this->sujetandoObjeto = sujetandoObjeto;
	return sujetandoObjeto;
}

void BrazoRobotico::coger(){
	sujetandoObjeto= true;
	std::cout<<"El robot coge el objeto"<<std::endl;
}

void BrazoRobotico::soltar(){
	sujetandoObjeto=false;
	std::cout<<"El robot suelta el objeto"<<std::endl;
}

void BrazoRobotico::mover(double a, double b, double c){
	x=a;
	y=b;
	z=c;
}

	
;
