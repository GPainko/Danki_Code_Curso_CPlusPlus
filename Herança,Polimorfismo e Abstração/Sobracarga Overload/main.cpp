#include <iostream>
using namespace std;

class Impressora{
  public:
    void imprimir(float real){
      cout <<"R$: " << real << endl;
    }
    void imprimir(string frase){
      cout <<"- " << frase << endl;
    }
};

int main() {
  Impressora imp;
  imp.imprimir(20.19);
  imp.imprimir("ola");
  return 0;
}