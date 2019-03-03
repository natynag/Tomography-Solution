#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main(){
  string stringPos, stringDist, stringTemp;
  ifstream inputPos, inputDist, inputTemp;
  stringstream linePos, lineDist, lineTemp;
  int lineSize;

  inputPos.open("pesos.txt");
  inputDist.open("posicoes.txt");
  inputTemp.open("tempos.txt");

  // Iteracoes de linha
  for(int i = 0; i < 10; i++){
    cout << "linha i = " << i << endl;

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
    cout << lineSize << endl;

  }

  inputPos.close();
  inputDist.close();
  inputTemp.close();
}
