#include <iostream>
#include <new>
using namespace std;

int main() {
  // tamanho a ser criado
  int tamanho;

  // lendo o tamanho do vetor
  cout << "digite o tamanho:\n";
  cin >> tamanho;

  // criando um ponteiro que recebe o novo vetor vazio
  int *vetor=new int[tamanho];

  vetor[0]=5;
  vetor[1]=10;

  cout <<"vetor:" << vetor[0] <<","<<vetor[1];
  return 0;
}