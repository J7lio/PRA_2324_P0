#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main(){
	cout << "\n\nCreando Instancia de BrazoRobotico.\n" << endl;
	BrazoRobotico brazo1 = BrazoRobotico();

	cout << "Escribe las tres coordenadas a las que quieres mover el brazo: ";
	double x, y, z;
	cin >> x >> y >> z;
	brazo1.mover(x, y, z);
	cout << "\nCogiendo objeto.\n" << endl;
	brazo1.coger();

	cout << "El brazo esta en la posicion: (" << brazo1.posx() << ", " << brazo1.posy() 
		<< ", " << brazo1.posz() << ") y la pinza esta en estado: " << brazo1.posPinza() 
		<< " (0->Abierta 1->Cerrada). \n" << endl;

	cout << "Volviendo al origen y abriendo pinza.\n" << endl;
	brazo1.mover(0, 0, 0);
	brazo1.soltar();

	cout << "El brazo esta en la posicion: (" << brazo1.posx() << ", " << brazo1.posy() 
		<< ", " << brazo1.posz() << ") y la pinza esta en estado: " << brazo1.posPinza() 
		<< " (0->Abierta 1->Cerrada). \n" << endl;

	cout << "FIN\n\n\n";

	return 0;
}
