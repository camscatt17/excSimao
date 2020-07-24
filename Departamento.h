#pragma once

class Departamento {
    private:
        char nome[30];

    public:
        Departamento();
        ~Departamento();
        void setNomeDpto(const char* nome);
        char* getNomeDpto();

};