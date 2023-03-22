#include <iostream>
#include "arvore_tad.h"
#include <cstdlib>
#include <random>
#include <math.h>
using namespace std;
using std::string;



int main() {
    int res;
    cout << "BEM VINDO AO AKINUMBER!" << endl;
    cout << endl;
    cout << "Pense em um número qualquer entre 1 e 1023, o gênio irá descobrir o número com apenas algumas perguntas." << endl;
    cout << endl; 
    cout << "0 - (NÃO / MENOR)" << endl;
    cout << "1 - (SIM / MAIOR)" << endl;
    cout << endl;

// CRIA ÁRVORE
    ArvoreBinaria R;
    R = Cria();
// INSERE VALORES COM FOR
  int x = 512;

  for(int i = 1; i<11;i++){
    for(int j = 1; j<=pow(2,i);){
      Insere(R,x*j);
      j+=2;
    }
    x = x/2;
  }
// Imprime(R);
// JOGO SE INICIA
jogar(R);


return 0;
}