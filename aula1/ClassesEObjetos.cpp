#pragma once 
//evita a inclus�o circular (redefini��o) de bibliotecas
#include <iostream> 
#include "Aluno.h"
// // /* */ Serve para delimitar coment�rios no c�digo fonte
//'#include' indica a inclus�o de uma biblioteca
//bibliotecas sem extens�o e delimitadas com '<>' --> C++
//bibliotecas com extens�o .h e delimitadas por '""' => C, 
//ou cabe�alhos de classe do usu�rio
using namespace std;
//'using namespace' indica que ser�o usados os m�todos e 
//operadores da biblioteca standard do c++ como :
//cout, cin, <<, >>, +, endl, etc

void exercicio1() {
	//utilizar este esqueleto para implementar os exerc�cios
	Aluno * aluno1;
	Aluno * aluno2;
	Aluno * aluno3;
	string nome1 = "";
	string nome2 = "";
	string nome3 = "";
	string nomeCurso1 = "";
	string nomeCurso2 = "";
	string nomeCurso3 = "";

	int igual = 1;

	cout << "Digite o nome do Aluno 1" << endl;
	getline(cin, nome1);


	do {
		cout << "Digite o nome do Aluno 2" << endl;
		getline(cin, nome2);
		igual = nome1.compare(nome2);
		if (igual == 0) {
			cout << "Erro. Nomes iguais." << endl;
		}
	} while (igual == 0);

	do {
		cout << "Digite o nome do Aluno 3" << endl;
		getline(cin, nome3);
		igual = nome1.compare(nome3);
		if (igual == 0) {
			cout << "Erro. Nomes iguais." << endl;
		}
		else {
			igual = nome2.compare(nome3);
			if (igual == 0) {
				cout << "Erro. Nomes iguais." << endl;
			}
		}

	} while (igual == 0);

	cout << "Digite o nome do Curso 1" << endl;
	getline(cin, nomeCurso1);
	cout << "Digite o nome do Curso 2" << endl;
	getline(cin, nomeCurso2);
	cout << "Digite o nome do Curso 3" << endl;
	getline(cin, nomeCurso3);

	aluno1 = new Aluno(nome1, nomeCurso1);
	aluno2 = new Aluno(nome2, nomeCurso2);
	aluno3 = new Aluno(nome3, nomeCurso3);


	cout << "Lista de alunos" << endl;
	cout << "O aluno " + aluno1->getNome() + " esta cursando :" + aluno1->getCurso()->getNome() << endl;
	cout << "O aluno " + aluno2->getNome() + " esta cursando :" + aluno2->getCurso()->getNome() << endl;
	cout << "O aluno " + aluno3->getNome() + " esta cursando :" + aluno3->getCurso()->getNome() << endl;

	string curso = "";

	do {
		cout << "Digite o nome do curso ou X para sair" << endl;
		getline(cin, curso);
		if (curso.compare("X") == 0) {
			exit(0);
		}

		if (aluno1->getCurso()->getNome().compare(curso) == 0) {
			cout << "Aluno encontrado: " << aluno1->getNome() << endl;
		}
		else if (aluno2->getCurso()->getNome().compare(curso) == 0) {
			cout << "Aluno encontrado: " << aluno2->getNome() << endl;
		}
		else if (aluno3->getCurso()->getNome().compare(curso) == 0) {
			cout << "Aluno encontrado: " << aluno3->getNome() << endl;
		}
		else {
			cout << "Curso inexistente." << endl;
		}

	} while (1);


}


int main(int ){

	
	exercicio1();
	
	return 0;
}

