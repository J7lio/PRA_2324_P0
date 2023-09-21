#include <iostream>
#include "BrazoRobotico.h"

using namespace std;


//Constructor sin entrada, posicion a (0,0,0) y cogiendo a false.
BrazoRobotico::BrazoRobotico(){
	x = 0;
	y = 0;
	z = 0;
	cogiendo = false;
}

//Constructor con entrada.
BrazoRobotico::BrazoRobotico(double xx, double yy, double zz, bool sujetando){
	x = xx;
	y = yy;
	z = zz;
	cogiendo =  sujetando;
}

//Consultores de posicion.
double BrazoRobotico::posx(){
	return x;
}

double BrazoRobotico::posy(){
	return y;
}

double BrazoRobotico::posz(){
	return z;
}

bool BrazoRobotico::posPinza(){
	return cogiendo;
}

//Metodos para coger y usar la pinza
void BrazoRobotico::coger(){
	cogiendo = true;
}

void BrazoRobotico::soltar(){
	cogiendo = false;
}

void mover(double xx, double yy, double zz){
	x = xx;
	y = yy;
	z = zz;
}
