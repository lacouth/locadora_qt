#ifndef GERENCIADORARQUIVO_H
#define GERENCIADORARQUIVO_H

#include "filme.h"
#include <fstream>
#include <string>
#include <map>

#include <limits>
#include <QString>


#include <iostream>

class GerenciadorArquivo
{
private:
    std::string nome_arquivo;

public:
    GerenciadorArquivo();
    bool salvar_filme(Filme filme);
    bool salvar_dados(std::map<string,Filme> dados);
    std::map<string,Filme> obter_dados();

};

#endif // GERENCIADORARQUIVO_H
