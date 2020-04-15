#include "Principal.h"

Principal::Principal(){
    Simao.inicializa(3,10,1976, "Jean Simao");
    Camis.inicializa(17,01,1997, "Camila Santos");
    UTFPR.setNome("UTFPR");

    //Os objetos sao finalmente associados nesse ponto
    Simao.setUni(&UTFPR);
    Camis.setUni(&UTFPR);

    Executar();
}

void Principal::Executar(){
    Simao.calcIdade(15,04,2020);
    Camis.calcIdade(15,04,2020);

    Simao.ondeTrabalho();
    Camis.ondeTrabalho();
}