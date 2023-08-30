#include <iostream>
#include Fruta.h
using namespace std;


int main() {
  Fruta fruta1;
  fruta1.setNome("Uva");
  fruta1.setPreco(15.35);

  cout <<"Fruta 1:" << fruta1.getNome();
  cout <<" Custa R$:" << fruta1.getPreco();
}