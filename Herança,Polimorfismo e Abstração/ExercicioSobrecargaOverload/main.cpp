#include <iostream>
using namespace std;

class Calculadora{
  public:
    void somar(int valor1,int valor2){
      cout <<"soma :" << valor1 + valor2<<"\n";
    }
    void somar(int valor1,int valor2,int valor3){
      cout <<"soma :" << valor1 + valor2 + valor3<<"\n";
    }
};
int main() {
  Calculadora calc;
  calc.somar(10, 20);
  calc.somar(10, 20, 30);
  return 0;
}