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

bool BrazoRobotico::getsujetandoObjeto(){
	return sujetandoObjeto;
}

void BrazoRobotico::coger(){
	std::cout<<"El robot coge el objeto"<<std::endl;
}

void BrazoRobotico::soltar(){
	std::cout<<"El robot suelta el objeto"<<std::endl;
}

void BrazoRobotico::mover(double a, double b, double c){
	x=a;
	y=b;
	z=c;
}

	
;
