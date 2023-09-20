#include<iostream>
#include"BrazoRobotico.h"

int main(){
	BrazoRobotico r1(2.3,6,5);
	r1.mover(3,7.8,2);
	r1.coger();
	return 0;
}

