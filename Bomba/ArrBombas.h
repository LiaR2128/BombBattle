#ifndef __ARRBOMBAS__H__
#define __ARRBOMBAS__H__
#include "Bomba.h"
#include <vector>
using namespace std;

class CArrBombas
{
public : 
	CArrBombas(); {totalBombas = 1; }
	~CarrBombas(){}
	void crear_una_bomba(int x, int y) {
		if (arregloBombas.size() < totalBombas) {
			CBomba* nueva_bomba = new CBomba(x, y);
			arregloBombas.push_back(nueva_bomba);
		}
	}

	void dibujar_una_bomba(Graphics^ g, Bitmap^ bmpBomba, Bitmap^ bmpExplosion, int xJugador,int yJugador, int **matriz) {
		for (int i = 0, i < arregloBombas.size(); i++)
		{
			switch (arregloBombas.at(i)->getEstado())
			{
			case Estado :: normal:
				arregloBombas.at(i)->dibujarBomba(g, bmpBomba, xJugador, yJugador, matriz);
				arregloBombas.at(i)->animar();
					break;
			case Estado:: explosion:
				arregloBombas.at(i)->dibujarExplosion(g, bmpExplosion, matriz);
				arregloBombas.at(i)->animarExplosion();
				break;
			case Estado:: desaparecer:
				arregloBombas.erase(arregloBombas.begin() + i);

				break;

			}
		}


	}
	






private:

};
