#include <iostream>
using namespace std;

class Cachorro{
  public:
    string raca;
    Cachorro(){
      raca = "vira lata";
    }
    Cachorro(string novaRaca){
      raca = novaRaca;
    }
};

int main() {
  Cachorro dog;
  cout <<"cachorro1 raça :"<<dog.raca << "\n";
  Cachorro dog1("beagle");
  cout <<"cachorro2 raça :"<<dog1.raca;
}