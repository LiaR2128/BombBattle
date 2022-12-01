#ifndef __ARRMEJORAS_H__
#define __ARRMEJORAS_H__

include"mejoras.h"
#include <vector>

using namespace std;
class CArrmejoras
{
public:
	CArrmejoras(){}
	~CArrmejoras(){}
	void crearmejoras() {
		CMejora* nueva_mejora = new CMejora();
		vector_mejoras.push_back(nueva_mejora);
	}
	void dibujar(Graphics^ g, Bitmap^ bmpMejoras, int** matriz) {
		for (int i = 0; i < vector_mejoras.size(); i++) {
			vector_moejoras.at(i)->dibujar(g, bmpMejoras, matriz);
			vector_moejoras.at(i)->animar();
		}
	}

private:
	vector<CMejora*>vector_mejoras;
};
#endif
