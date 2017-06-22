Pseudo Código
=============

Raíz
####

Gerar Árvore (principal)
------------------------

	* Gera próximo estado  (a)
	* 8 vezes:
		* Testa se é solução (b)
	 		* (Não) Testa se já existe (c)
	 			* (Não) Gera filho e chama recursividade (d)
	 	* (Sim) Retorna até pai guardando estados no vetor solução

2º nível de abstração
#####################

Gerar próximo estado (a)
------------------------

	* Achar lacuna
	* Achar periféricos
	* Para cada periférico:
		* Tentar mover periférico e guardar estado no vetor estados
	* Retorna estados

Solução teste (b)
-----------------

	* compara matriz (i)

|
|

Testa se já existe(busca na árvore) (c)
---------------------------------------

	Parâmetros: nó raiz; nó buscado(estado)

	* Para cada filho:
		* Testa se filho é igual a nó buscado(compara matriz):
			* (sim) retorna verdadeiro
			* (não) Chama recursividade passando filho como raíz
	* Retorna falso 

Gera filho (d)
--------------

	Parâmetros: pai; estado;

	* "Instancia" filho.
	* Setar pai (filho.pai = pai).	
	* Setar estado (filho.estado = estado).
	* Anula filhos (filhos.filhos[]).
	* Retorna filho


3º nível de abstração
#####################

Compara matriz (i)
------------------

	Parâmetros: matriz 1; matriz 2;

	* Testa se matriz1 e matriz2 são nulas:
		* (não) compara
		* (sim) retorna falso


