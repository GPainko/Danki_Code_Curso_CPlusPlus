#include <iostream>
using namespace std;

class Calculadora{
  public:
    Calculadora(){
      printf("Calculadora Criada \n");
    }
    int soma(int x ,int y){
      int resultado = x + y;
      return resultado;
    }
};

int main() {
  Calculadora calc;
  cout << calc.soma(10, 5);
 return 0;
}