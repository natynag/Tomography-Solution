#include "pch.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;


int main() {
	string stringPos, stringDist;
	int nDeRec;

	cin >> nDeRec;

	double **A = (float **)malloc(10000 * sizeof(float *));
	for (int i = 0; i < 10000; i++) {
		A[i] = (float *)malloc(nDeRec*nDeRec * sizeof(float));
	}

	ifstream inputdist;
	inputdist.open("pesos.txt");
	ifstream inputpos;
	inputpos.open("posicoes.txt");
	// for lines
	for (int i = 0; i<10000; i++) {
		getline(inputpos, stringPos);
		getline(inputdist, stringDist);
		istringstream linepos(stringPos); //transforma em fluxo
		istringstream linedist(stringDist);
		for (int j = 0; j<144; j++) {
			getline(linepos, stringPos, ',');
			getline(linedist, stringDist, ',');
			A[i][atoi(stringPos)] = stof(stringDist);
		}
		for (int i = 0; i < 10000; i++) {

		}

		// for(int i=0;i<10000;i++){
		//   for(int j=0;j<144;j++){
		//     cout << testeVect[i][j] << ' ';
		//     if(j==143)
		//       cout << "FIM DA LINHA " << i+1 << endl;
		//   }

		// }

		cout << endl << endl << endl;

		// ifstream inputpos;
		// inputpos.open("posicoes.txt");

		// for(int i=0;i<200;i++){
		// getline(inputpos, test,',');
		// testeVect[i] = stof(test);
		// }

		// for(int i=0;i<200;i++){
		// cout << testeVect[i] << ' ';
		// }


		inputdist.close();
		// inputpos.close();

		//int nDeRec, iMatriz, jMatriz;
		// cout << "Tamanho da Matriz de Pos: " << endl;
		// cin >> iMatriz >> jMatriz;
		// cout << "numero de pixels na reconstrução: " << endl;
		// cin >> nDeRec;

		// double **A = (double **)malloc(nDeRec * sizeof(double *));
		// for (int i = 0; i < nDeRec; i++) {
		// A[i] = (double *)malloc(nDeRec * sizeof(double));
		// }
		// double *B = new double[nDeRec*nDeRec];
		// B é um vetor temporario de pesos
		// inicializando a matriz A com zeros
		// for (int i = 0; i < nDeRec; i++) {
		//	for (int j = 0; j < nDeRec; j++) {
		//		A[i][j] = 0;
		//	}
		//}
		//ifstream inputdist;
		//inputdist.open("pesos.txt");
		//int e, r, nDePix, pos;
		//double dist;
		//int indiceB = 0;
		//for (int i = 0; i < iMatriz; i++) {
		//	inputdist >> e >> r >> nDePix;
		//	for (int j = 0; j < jMatriz - 3; j++) {
		//		inputdist >> dist;
		//		B[indiceB] = dist;
		//		indiceB++;
		//	}
		//}
		//inputdist.close();
		//ifstream inputpos;
		//inputpos.open("posicoes.txt");
		//indiceB = 0;
		//for (int i = 0; i < iMatriz; i++) {
		//	inputpos >> e >> r >> nDePix;
		//	for (int j = 0; j < jMatriz - 3; j++) {
		//		inputpos >> pos;
		//		A[i][pos - 1] = B[indiceB];
		//		indiceB++;
		//	}
		//}
		//inputpos.close();

		//for (int i = 0; i < nDeRec; i++) {
		//	for (int j = 0; j < nDeRec; j++) {
		//		cout << A[i][j] << " ";
		//	}
		//	cout << endl;
		//}

		//return 0;
	}
