#include <iostream>
#include <new>
using namespace std;

int main() {
  int numeroLinhas, numeroColunas;
  cout<<"digite o numero de linhas:\n";
  cin>>numeroLinhas; // lendo o numero de linhas
  cout<<"digite o numero de colunas:\n";
  cin>>numeroColunas;// lendo numero de colunas

  //aloca as linhas
  int** matriz = new int*[numeroLinhas];

  //alocando colunas
  for(int i = 0;i<numeroLinhas;i++){
    matriz[i]=new int[numeroColunas];
  }
  
  //preencher matriza criada
  for(int i = 0; i< numeroLinhas;i++){
    for(int j = 0; j< numeroColunas;j++){
      matriz[i][j] = i + j;
    }
  }

  //preencher matriza criada
  for(int i = 0; i< numeroLinhas;i++){
    for(int j = 0; j< numeroColunas;j++){
      cout << matriz[i][j] ;
    }
    cout <<"\n";
  }
  
  return 0;
}