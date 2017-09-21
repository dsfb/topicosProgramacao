#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

//Esta classe fornece os servi�os necess�rios para acessar um arquivo e ler dados a partir dele.
class Leitor
{
public:
	Leitor(void);
	~Leitor(void);
	Leitor(string nome);
	bool conectar(string nome); 
	//este m�todo recebe o caminho para um arquivo ou apenas seu nome 
	//se o arquivo estiver na mesma pasta do execut�vel
	//se a conex�o der certo, retorna true, se n�o, false.

	void desconectar ();
	string lerConteudo();
private:
	string nomeArquivo;
	ifstream arquivo;
};

