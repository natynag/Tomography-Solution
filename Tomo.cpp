// #include "pch.h"
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
  float test;

  cout << "nDeRec: 3" << endl;
  // cin >> nDeRec;
  nDeRec = 3;

  float **A = (float **)malloc(10000 * sizeof(float *));
  for (int i = 0; i < 10000; i++) {
    A[i] = (float *)malloc(nDeRec*nDeRec * sizeof(float));
  }
  float *x = (float *)malloc(nDeRec*nDeRec * sizeof(float *));

  ifstream inputdist;
  inputdist.open("pesos.txt");
  ifstream inputpos;
  inputpos.open("posicoes.txt");


  for (int i = 0; i<10; i++) {
    cout << "inicio do for" << endl;

    getline(inputpos, stringPos);
    getline(inputdist, stringDist);

    cout << stringPos << endl;
    cout << stringDist << endl;


    stringstream linepos(stringPos); //transforma em fluxo
    stringstream linedist(stringDist);

    for (int j = 0; j<3; j++) {
      getline(linepos, stringPos, ',');
      getline(linedist, stringDist, ',');

      test = stof(stringPos);
      cout << test << endl;
    }

    //    test = stof(stringPos);

    //    cout << (int)stringPos << endl;
    //cout << stringDist << endl;



    // for (int k = 0; k < stoi(stringDist); k++){
    //   getline(linepos, stringPos, ',');
    //   getline(linedist, stringDist, ',');
    //   cout << "stringDist" << stringDist << endl;
    //   cout << "stringPos" << stringPos << endl;
    //   // A[i][stoi(stringPos)] = stof(stringDist);
    // }

    // for (int i = 0; i < 1; i++) {
      // for (int j = 0; j < nDeRec*nDeRec; j++){
        // cout << A[i][j];
      // }
    // }

    // for(int i=0;i<10000;i++){
    //   for(int j=0;j<144;j++){
    //     cout << testeVect[i][j] << ' ';
    //     if(j==143)
    //       cout << "FIM DA LINHA " << i+1 << endl;
    //   }

    // }

    cout << endl << endl << endl;
    // for (int i = 0; i < 10000; i++) {
    //  getline(inputpos, stringPos);
    //  getline(inputdist, stringDist);
    //  istringstream linepos(stringPos); //transforma em fluxo
    //  istringstream linedist(stringDist);
    //  for (int j = 0; j < 144; j++) {
    //          getline(linepos, stringPos, ',');
    //          getline(linedist, stringDist, ',');
    //          A[i][stoi(stringPos)] = stof(stringDist);
    //  }
    // }

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
    inputpos.close();
  }

  ifstream inputtemp;
  inputtemp.open("tempos.txt");

  inputdist.close();
  inputpos.close();
  inputtemp.close();

free(A);
free(x);
for (int i = 0; i < 10000; i++) {
  free(A[i]);
 }

  return 0;

}
