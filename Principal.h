#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Principal{
    private: 
        Pessoa Simao;
        Pessoa Camis;

        int dia, mes, ano;

        //UTFPR é agregada aos objetos dessa classe (tipo mais forte de relação) 
        Universidade UTFPR;
        Universidade TJPR;

        //Dpto é agregado aos objetos dessa classe
        Departamento DAINF;
        Departamento DGRH;

    public:
        Principal();
        ~Principal();
        void Executar();
};