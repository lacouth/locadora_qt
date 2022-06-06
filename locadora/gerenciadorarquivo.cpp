#include "gerenciadorarquivo.h"

GerenciadorArquivo::GerenciadorArquivo()
{
    this->nome_arquivo = "dados.csv";
}

bool GerenciadorArquivo::salvar_filme(Filme filme)
{
    std::ofstream arquivo(this->nome_arquivo,std::ios::app);
    if(arquivo.is_open()){
        arquivo << filme.getTitulo() << ",";
        arquivo << filme.getDiretor() << ",";
        arquivo << filme.getAno() << ",";
        arquivo << filme.getValor() << ",";
        arquivo << filme.getCod() << ",";
        arquivo << filme.getAlugado() << std::endl;
        arquivo.close();
        return true;
    }
    return false;
}

bool GerenciadorArquivo::salvar_dados(std::map<std::string, Filme> dados)
{
    for(const auto &[cod,filme] : dados){
        if(!this->salvar_filme(filme)){
            return false;
        }
    }
    return true;
}

std::map<string, Filme> GerenciadorArquivo::obter_dados()
{
    Filme filme;
    std::map<string, Filme> dados;
    std::ifstream arquivo(nome_arquivo);
    string aux;
    string cod;
    if(arquivo.is_open()){
        while(std::getline(arquivo,aux,',')){
            filme.setTitulo(aux);

            getline(arquivo,aux,',');
            filme.setDiretor(aux);

            getline(arquivo,aux,',');
            filme.setAno(std::stoi(aux));

            getline(arquivo,aux,',');
            filme.setValor(QString::fromStdString(aux).toDouble());
            std::cout << QString::fromStdString(aux).toDouble() << " : " << aux << std::endl;

            getline(arquivo,cod,',');
            filme.setCod(cod);

            getline(arquivo,aux);
            filme.setAlugado(std::stoi(aux));

            dados[cod] = filme;
        }

    }
    arquivo.close();
    return dados;
}
