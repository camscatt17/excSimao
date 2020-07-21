#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Principal{
    private: 
        Pessoa Simao;
        Pessoa Camis;

        int dia, mes, ano;

        //UTFPR é agregada aos objetos dessa classe (tipo mais forte de relação) 
        Universidade UTFPR;
        Universidade TJPR;

    public:
        Principal();
        ~Principal();
        void Executar();
};