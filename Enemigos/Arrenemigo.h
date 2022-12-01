#ifndef __ARRENEMIGOS_H__
#define __ARRENEMIGOS_H__
#include "enemigo.h"
#include <vector>

using namespace std;

class CArrEnemigo
{
public:
	CArrEnemigo(){
		arregloEnemigos* vector<Enemigo*>();
	}
	~CArrEnemigo(){}
	void crearEnemigo(){
		CEnemigo * nuevo = new CEnemigo();
		arregloEnemigos.push_back(nuevo);
		}
	void dibujar(Graphics^ g, Bitmap^ bmpEnemigo, int** matriz) {
		for (int i = 0; i < arregloEnemigos.size; i++)
		{
			arregloEnemigo.at(i)->dibujar(g, bmpEnemigo, matriz);
			arregloEnemigo.at(i)->animacion();
		}
	}
	vector<CEnemigos*>getarregloEnemigos() {
		return arregloEnemigos;
	}
private:
	vector<CEnemigo*>arregloEnemigos;
};

#endif
