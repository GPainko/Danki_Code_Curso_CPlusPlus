#include <iostream>
using namespace std;

class Calculador{
  public:
    int somar(int x ,int y){
      int resultado = x + y;
      return resultado;
    }

    int subt(int x ,int y){
      int resultado = x - y;
      return resultado;
    }

    int mult(int x ,int y){
      int resultado = x * y;
      return resultado;
    }

    int div(int x ,int y){
      int resultado = x / y;
      return resultado;
    }
};

int main() {
  Calculador calc;
  cout << calc.somar(10, 2)<< "\n";
  cout << calc.subt(10, 2)<< "\n";
  cout << calc.mult(10, 2)<< "\n";
  cout << calc.div(10, 2)<< "\n";
  return 0;
}