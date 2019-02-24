#include "pch.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;


/*void SIRT(float A, float dt, float x, int k) {
	for ()



}*/

int main() {
	string stringPos, stringDist;
	int nDeRec;
	cin >> nDeRec;
	float **A = (float **)malloc(10000 * sizeof(float *));
	for (int i = 0; i < 10000; i++) {
		A[i] = (float *)malloc(nDeRec*nDeRec * sizeof(float));
	}
	float *x = (float *)malloc(nDeRec*nDeRec * sizeof(float *));
	ifstream inputdist;
	inputdist.open("pesos.txt");
	ifstream inputpos;
	inputpos.open("posicoes.txt");
	// for lines
	for (int i = 0; i < 10000; i++) {
		getline(inputpos, stringPos);
		getline(inputdist, stringDist);
		istringstream linepos(stringPos); //transforma em fluxo
		istringstream linedist(stringDist);
		for (int j = 0; j < 144; j++) {
			getline(linepos, stringPos, ',');
			getline(linedist, stringDist, ',');
			A[i][stoi(stringPos)] = stof(stringDist);
		}
	}
	ifstream inputtemp;
	inputtemp.open("tempos.txt");

	inputdist.close();
	inputpos.close();
	inputtemp.close();
	return 0;
	}
