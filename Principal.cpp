#include "Principal.h"

using std::cin;
using std::cout;
using std::endl;

Principal::Principal(): Simao(), Camis(), UTFPR(), TJPR() {
    Simao.inicializa(3,10,1976, "Jean Simao");
    Camis.inicializa(17,01,1997, "Camila Santos");

    //Coloca o nome das universidades
    UTFPR.setNome("UTFPR");
    TJPR.setNome("TJPR");

    //coloca o nome dos Dptos
    DAINF.setNomeDpto("DAINF");
    DGRH.setNomeDpto("DGRH");

    //cout << "Informe o dia/ mes/ ano." << endl; 
    //cin >> dia >> mes >> ano;

    //associação entre os objetos simao e UTFPR
    Simao.setUni(&UTFPR);
    Camis.setUni(&TJPR);

    //associação entre os objetos Simao e Camis e os respectivos dptos
    Simao.setDpto(&DAINF);
    Camis.setDpto(&DGRH);

    Executar();
}

Principal::~Principal(){
    
}

void Principal::Executar(){
    //Simao.calcIdade(dia, mes, ano);
    Simao.ondeTrabalha();
    Simao.DptoOndeTrabalha();
    //Camis.calcIdade(dia, mes, ano);
    Camis.ondeTrabalha();
    Camis.DptoOndeTrabalha();
}