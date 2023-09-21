#include <iostream>

using namespace std;

class BrazoRobotico{
	private:
		double x, y, z;
		bool cogiendo;
	public:
		BrazoRobotico();
		BrazoRobotico(double, double, double, bool);

		double posx();
		double posy();
		double posz();
		bool posPinza();
		
		void coger();
		void soltar();
		void mover(double, double, double);
};	
