/**
PCS2478 - T�picos de Programa��o
globais.h

@author 8586861 - Luiz Eduardo Sol (luizedusol@gmail.com)
@author 7576829 - Augusto Ruy Machado (augustormachado@gmail.com)
@version 1.0 2017-10-11
*/

#pragma once

enum Arquivos { CAD_PESSOAS, TAB_SALARIAL, IMP_RENDA, CONTR_SINDICAL };

enum Campos {
	//cadastro pessoas
	C_IDPESSOA, C_IDFUNC, C_EFUNC, C_NOME, C_PROFISSAO, C_ENDERECO, C_FUNCAO, C_CARGO, C_FAIXASALARIAL, C_GRATIFICACAO,
	// tabela salarial
	C_CATSALARIAL=0, C_SALARIO=1,
	//tabela de contribui��o sindical
	C_CARGO_CS=0, C_CONTRIBUICAO_CS=1,
	// tabela de IR
	C_LIM_MIN=0, C_LIM_MAX=1,C_PORCENTAGEM=2,C_DEDUCAO=3

};