using namespace std;

class Fruta{
  private:
    float preco;
    string nome;

    public:
      float getPreco(){
        return preco;
      }
      void setPreco(float precoNovo){
        preco = precoNovo;
      }

      string getNome(){
        return nome;
      }

      void setNome(String nomeNovo){
        nome = nomeNovo;
      }
};
