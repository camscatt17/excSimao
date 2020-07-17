#include "Principal.h"
#include "Pessoa.h"
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

Principal::Principal(){
    Simao.inicializa(3,10,1976, "Jean Simao");
    Camis.inicializa(17,01,1997, "Camila Santos");

    cout << "Informe o dia/ mes/ ano." << endl; 
    cin >> dia >> mes >> ano;

    Executar();
}

void Principal::Executar(){
    Simao.calcIdade(dia, mes, ano);
    Camis.calcIdade(dia, mes, ano);
}