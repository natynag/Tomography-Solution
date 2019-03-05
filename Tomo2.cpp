// #include "pch.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

typedef struct dadosA {
  int posicao;
  float distancia;
} DadosA_t;

/* MAIN function
 * function: reading and parsing
 * of CSV files that contains data
 * for the tomography reconstruction
*/

int main(){
  string stringPos, stringDist, stringTemp;
  ifstream inputPos, inputDist, inputTemp;
  stringstream linePos, lineDist, lineTemp;
  int lineSize, numLines = 10000;

  DadosA_t **A;

  A = (DadosA_t **)malloc(numLines * sizeof(DadosA_t *));

  inputPos.open("posicoes.txt");
  inputDist.open("pesos.txt");
  inputTemp.open("tempos.txt");

  // Iteracoes de linha
  for(int i = 0; i < numLines; i++){
    getline(inputPos, stringPos);
    getline(inputDist, stringDist);

    linePos.str(stringPos);
    lineDist.str(stringDist);

    // Iteracoes para ler o tamanho dos dados da linha
    for(int j = 0; j < 3; j++){
      getline(linePos,stringPos, ',');
      getline(lineDist,stringDist, ',');
    }

    lineSize = stoi(stringDist);
    // malloc de lineSize + 1 para ter na primeira coluna, o tamanho da linha
    A[i] = (DadosA_t *)malloc((lineSize + 1) * sizeof(DadosA_t *));

    A[i][0].posicao = lineSize;

    // Iteracoes para ler os dados das linhas
    for(int j = 1; j <= lineSize; j++){
      if(j < 141){
        getline(linePos,stringPos, ',');
        getline(lineDist,stringDist, ',');
      } else {
        linePos >> stringPos;
        lineDist >> stringDist;
      }
      A[i][j].posicao = stoi(stringPos);
      A[i][j].distancia = stof(stringDist);

    }
  }

  /* DEBUG region
   * this part of the code is solely
   * for printing the result on screen
   * for debugging
  */

  int teste;

  for(int i=0;i<numLines;i++){
    cout << "linha: " << i << endl;
    teste = A[i][0].posicao;

    for(int j=0;j<teste+1;j++){
      cout << '('  << A[i][j].posicao << ',' <<  A[i][j].distancia << ')' << ' ';
    }
    cout << endl;
  }

  /* FREE memory region
   * function: free allocated memory
   * after it has been used
  */

  for(int i = 0; i < numLines; i++){
    free(A[i]);
  }

  free(A);

  inputPos.close();
  inputDist.close();
  inputTemp.close();
}
