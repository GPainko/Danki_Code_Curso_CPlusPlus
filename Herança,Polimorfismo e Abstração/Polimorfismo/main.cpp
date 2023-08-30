#include <iostream>
using namespace std;

class Animal{
  public:
    void emitirSom(){
      
    }
};

class Cachorro: public Animal{
  public:
    void emitirSom(){
      cout<<"au au";
    }
};

class Gato:public Animal{
  public:
    void emitirSom(){
      cout<<"miau miau";
    }
};

int main() {
  Cachorro dog;
  dog.emitirSom();
  cout<<"\n";
  Gato cat;
  cat.emitirSom();
  
  return 0;
}