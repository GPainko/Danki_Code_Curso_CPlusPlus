#include <iostream>
using namespace std;

class Salgadinho{
  private:
    string sabor;
  public:
    Salgadinho(string sabor){
      setSabor(sabor);
    }
    string getSabor(){
      return sabor;
    }

    void setSabor(string sabor){
      this->sabor = sabor;
    }
};

int main() {
  Salgadinho s("picante");
  cout << "salgadinho sabor:" << s.getSabor() <<"\n";
  return 0;
}