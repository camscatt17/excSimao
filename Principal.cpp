#include "Principal.h"

using std::cin;
using std::cout;
using std::endl;

Principal::Principal(): Simao(), Camis(), UTFPR(), TJPR() {
    Simao.inicializa(3,10,1976, "Jean Simao");
    Camis.inicializa(17,01,1997, "Camila Santos");
    UTFPR.setNome("UTFPR");
    TJPR.setNome("TJPR");

    cout << "Informe o dia/ mes/ ano." << endl; 
    cin >> dia >> mes >> ano;

    //associação entre os objetos simao e UTFPR
    Simao.setUni(&UTFPR);
    Camis.setUni(&TJPR);

    Executar();
}

Principal::~Principal(){
    
}

void Principal::Executar(){
    Simao.calcIdade(dia, mes, ano);
    Simao.ondeTrabalha();

    Camis.calcIdade(dia, mes, ano);
    Camis.ondeTrabalha();
}