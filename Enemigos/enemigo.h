#ifndef __ENEMIGO_H__
#define __ENEMIGO_H__
#include<ctime>
#include<cstdlib>

using namespace System::Drawing;
enum estadoenemigo{eliminado,vivo};

class Cenemigo {
public:
	Cenemigo() {
		srand(time(NULL));
		i = rand() % 13 + 1;
		j = rand() % 13 + 2;
		x = 32;
		y = 23;
		direccionalX=5;
		indiceX=0;
		incideY=0;
		direccionalY=;
		ancho = 96 / 16;
		alto = 16;
		ubicado = false;
		estado = vivo;
	}
	~Cenemigp(){}
	void dibujar(Graphics^ p, Bitmap^ bmpEnemigo, int** matriz) {
		Rectangle usarpixeles = Rectangle(indiceX * ancho, indiceY * alto, ancho, alto);
		while ((matriz[i][j - 1] != 2 || matriz[i][j] != 2 || matriz[i][j + 1] != 2) && i < 14 && ubicado == false) {
			j++;
			if (j == 15) {
				i++;
				j = 0;
			}
			if (i >= 14)break;
			x = j + 50;
			y = i + 50;
		}
		ubicado = true;
		Rectangle Aumento = Rectangle(x, y, 40, 40);
		g->DrawImage(bmpEnemigo, Aumento, usarpixeles, GraphicsUnit::Pixel);
		x += direccionalX;
		if ((matriz[y / 50][(x + 50) / 50]) == 3 || matriz[y / 50][(x + 50) / 50] == 1) || matriz[y / 50][(x - 10) / 50] == 1)
		direccionalX *= -1;
	}
	void animacion() {
		if (indiceX >= 0 && indiceX < 5) {
			indiceX++;
		}
		if (indiceX == 5) {
			while (indiceX!=0)
			{
				indiceX--;
			}
		}
	}
private:
	int x;
	int y;
	int i;
	int j;
	int indiceX;
	int indiceY;
	int alto;

	bool ubicado;

	estadoenemigo estado;
};
