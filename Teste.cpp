#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

void readLine(ifstream input, double **vect, int nRow, int nCol){
  string temp;
  getline(input, temp);
  istringstream line(temp);
  for(int j=0;j<nCol;j++){
    getline(line, temp, ',');
    (*vect)[nRow][j] = stof(temp);
  }
}

int main () {
  string stringPos, stringDist;
  double **testeVect;
  int nDeRec;

  cin >> nDeRec;

  double **A = (double **)malloc(nDeRec * sizeof(double *));
  for (int i = 0; i < nDeRec; i++) {
    A[i] = (double *)malloc(nDeRec * sizeof(double));
  }

  ifstream inputdist;
  inputdist.open("pesos.txt");

  // ifstream inputpos;
  // inputpos.open("posicoes.txt");

  for(int i=0;i<3;i++){
    readLine(inputdist,testeVect, 0, 144);
  }

  // for(int i=0;i<10000;i++){
  //   for(int j=0;j<144;j++){
  //     cout << testeVect[i][j] << ' ';
  //     if(j==143)
  //       cout << "FIM DA LINHA " << i+1 << endl;
  //   }

  // }

  cout << endl << endl<< endl;

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
