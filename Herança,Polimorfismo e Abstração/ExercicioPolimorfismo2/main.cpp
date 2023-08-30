#include <iostream>
using namespace std;

class Menu{
  public:
    void mostrarOpcoes(){
      
    }
};

class Cliente: public Menu{
  public:
    void mostrarOpcoes(){
      cout<<"Menu\n";
      cout<<"comprar\n";
      cout<<"cadastrar\n";
    }
};

class Administrador: public Menu{
  public:
    void mostrarOpcoes(){
      cout<<"Menu\n";
      cout<<"vender\n";
      cout<<"cadastrar\n";
      cout<<"remover\n";
    }
};

int main() {
  Cliente cli;
  cli.mostrarOpcoes();
  Administrador admi;
  admi.mostrarOpcoes();
  return 0;
}