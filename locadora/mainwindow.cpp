#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cadastro = gerenciador_arquivo.obter_dados();
    this->atualizar_tabela();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_gerar_cod_btn_clicked()
{

    string aux = ui-> titulo_edit->text().toStdString();

    if(!filme.setTitulo(aux)){
        QMessageBox::warning(this, "Cadastro","Título inválido, mínimo 3 caracteres");
        return;
    }

    aux = ui->diretor_edit->text().toStdString();

    if(!filme.setDiretor(aux)){
        QMessageBox::warning(this, "Cadastro","Diretor inválido, mínimo 3 caracteres");
        return;
    }

    aux = ui->genero_cb->currentText().toStdString();
    filme.setGenero(aux);

    int ano = ui->ano_edit->text().toInt();
    if(!filme.setAno(ano)){
        QMessageBox::warning(this, "Cadastro","ano inválido");
        return;
    }

    double valor = ui->valor_box->value();

    if(!filme.setValor(valor)){
        QMessageBox::warning(this, "Cadastro","valor de aluguel inválido");
        return;
    }

    filme.gerar_codigo();
    ui->codigo_edit->setText(QString::fromStdString(filme.getCod()));
    ui->cadastrar_btn->setEnabled(true);
    QMessageBox::information(this, "Cadastro","Confira os dados e clique em cadastrar");
}


void MainWindow::on_cadastrar_btn_clicked()
{

    auto teste = cadastro.insert(std::make_pair(filme.getCod(),filme));

    if(teste.second){
        QMessageBox::information(this, "Cadastro","Cadastro Efetuado com Sucesso!");
        this->atualizar_tabela();
        gerenciador_arquivo.salvar_filme(filme);
        ui->titulo_edit->clear();
        ui->diretor_edit->clear();
        ui->ano_edit->clear();
        ui->codigo_edit->clear();
        ui->valor_box->clear();
    }else{
        QMessageBox::information(this, "Cadastro","Código repetido, gere um novo código!");
    }
}

void MainWindow::atualizar_tabela()
{
    ui->filmes_table->clearContents();
    int i = 0;
    for(const auto &[cod, f] : this->cadastro){
        if(i >= ui->filmes_table->rowCount()){
            ui->filmes_table->insertRow(i);
        }
        ui->filmes_table->setItem(i,0,new QTableWidgetItem(QString::fromStdString(cod)));
        ui->filmes_table->setItem(i,1,new QTableWidgetItem(QString::fromStdString(f.getTitulo())));
        ui->filmes_table->setItem(i,2,new QTableWidgetItem(QString::fromStdString(f.getDiretor())));
        ui->filmes_table->setItem(i,3,new QTableWidgetItem(QString::number(f.getAno())));
        ui->filmes_table->setItem(i,4,new QTableWidgetItem(QString::number(f.getValor())));
        if(f.getAlugado()){
            ui->filmes_table->setItem(i,5,new QTableWidgetItem("Alugado"));
        }else{
            ui->filmes_table->setItem(i,5,new QTableWidgetItem("Disponível"));
        }
        i++;
    }

}

