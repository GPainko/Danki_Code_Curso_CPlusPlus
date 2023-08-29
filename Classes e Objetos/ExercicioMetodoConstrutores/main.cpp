#include <iostream>
using namespace std;

class Coxinha{
  public:
    string sabor;
    Coxinha(string novoSabor){
      printf("Coxinha feita\n");
      sabor = novoSabor;
    }
};

int main() {
  string sabor;
  cout <<"Digite o sabor da coxinha: ";
  cin >> sabor;
  Coxinha coxinha(sabor);
  cout << "o sabor da coxinha é "<< coxinha.sabor;
}