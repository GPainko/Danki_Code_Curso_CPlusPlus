#include <iostream>
using namespace std;

class FormaGeometrica{
  public:
    virtual int Area() = 0;

    void setLargura(int largura){
      this->largura =largura;
    }

    void setAltura(int altura){
      this->altura = altura;
    }

  protected:
    int altura;
    int largura;
};

class Retangulo:public FormaGeometrica{
  public:
    int Area(){
      return (largura * altura);
    }
};

class Triangulo:public FormaGeometrica{
  public:
    int Area(){
      return (largura * altura)/2;
    }
};

int main() {
  Retangulo r;
  Triangulo t;
  
  r.setAltura(5);
  r.setLargura(10);

  t.setAltura(20);
  t.setLargura(8);

  cout <<"Area do retangulo " << r.Area() <<"\n";
  cout <<"Area do retangulo " << t.Area() <<"\n";
  return 0;
}