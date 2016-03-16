#include "game.h"

int sumaA = 0, sumaB = 0;
void IniciarJuego(int n, int S[]){
    int j, i;
    for(i = 0, j = 1; i < n; i+= 2, j+= 2){
    sumaA += S[i];
    sumaB += S[j];
    }
}

int Movimiento(int m) {
	if(m < 0)
        if(sumaA > sumaB){
        return 0;
        }
        else {
        return 1;
        }
	else {
        return m;
	}
}
