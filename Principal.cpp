#include "Principal.h"
#include <studio.h>

using std::cin;
using std::cout;
using std::endl;

Principal::Principal(): Simao(), Camis(), UTFPR(), TJPR() {
    //leitura da data atual
    cout << "Informe o dia/ mes/ ano." << endl; 
    cin >> dia >> mes >> ano;  

    inicializa();
}

Principal::~Principal(){

}

void Principal::inicializa(){
    inicializaUniv();
    inicializaDpto();
    inicializaDiscip();
    inicializaProf();
    inicializaAluno();
}

void Principal::inicializaUniv){
    //Registro dos nomes das universidades
    UTFPR.setNome("UTFPR");
    TJPR.setNome("TJPR");
}

void Principal::inicializaDpto(){
    DAINF.setNomeDpto("Departamento de informática");
    DGRH.setNomeDpto("Divisão Geral dos Recursos Humanos");
}

void Principal::inicializaProf(){
    Simao.inicializa(3, 10, 1976, "Jean Simão");
    Simao.setUnivFiliado(&UTFPR);
    Simao.setDominio("Computação");
    Simao.setDptoFil(&DAINF);
}

void Principal::inicializaDiscip(){
    TecProgComp.setNome("Tec Prog");
    TecProgComp.setDpto(&DAINF);
    TecProgComp. incluaAluno(&Camis);
}

void Principal::inicializaAluno(){
    
}

void Principal::calcIdadeProf(){
    Simao.calcIdade(dia, mes, ano);
}

void Principal::univOndeTrabalha(){
    Simao.ondeTrabalha();
}

void Principal::dptoOndeTrabalha(){
    Simao.DptoOndeTrabalha();
}

void Principal::listeDiscDeptos(){
    DAINF.listeDisciplina();
}

void Principal::listaAlunoDis(){
    TecProgComp.listaAluno();
    count << endl;
    TecProgComp.listaAluno2();
    count << endl;

}

void Principal::Executar(){
    calcIdadeProf();
    univOndeTrabalha();
    dptoOndeTrabalha();
    listeDiscDeptos();
    listaAlunoDis();
}