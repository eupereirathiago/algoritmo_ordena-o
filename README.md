

# **Insertion Sort com Alocação Dinâmica em C**

Este é um projeto acadêmico simples em C, focado em demonstrar o funcionamento do algoritmo de ordenação **Insertion Sort** (Ordenação por Inserção) em conjunto com a manipulação de memória dinâmica (malloc e free).

O programa cria um vetor, preenche-o com 5 números aleatórios, ordena esse vetor e, em seguida, solicita ao usuário um sexto número, inserindo-o na posição correta para manter a ordem.

## **✨ Funcionalidades**

* **Alocação Dinâmica:** Aloca memória dinamicamente para o vetor usando malloc().  
* **Geração Aleatória:** Preenche o vetor com 5 números aleatórios usando rand() e srand().  
* **Ordenação:** Implementa o **Insertion Sort** (usando um *loop* for aninhado) para ordenar os 5 números iniciais.  
* **Inserção Otimizada:** Solicita um novo número ao usuário e o insere na posição correta do vetor já ordenado (sem reordenar tudo).  
* **Gerenciamento de Memória:** Libera a memória alocada ao final da execução com free().

## **🛠️ Tecnologias Utilizadas**

* Linguagem C  
* Bibliotecas Padrão:  
  * stdio.h (para entrada e saída)  
  * stdlib.h (para alocação de memória e números aleatórios)  
  * time.h (para inicializar o rand())

## **🚀 Como Executar**

Para compilar e executar este projeto em um ambiente Linux ou macOS (com GCC):

Clone o repositório (ou apenas baixe o arquivo .c):  
Bash  
git clone \[URL-DO-SEU-REPOSITÓRIO-AQUI\]  
cd \[NOME-DO-DIRETÓRIO-AQUI\]

1. 

Compile o arquivo C. Supondo que o nome do arquivo seja main.c:  
Bash  
gcc main.c \-o insertion\_sort

2.   
   * gcc: O compilador C.  
   * main.c: O nome do seu arquivo-fonte.  
   * \-o insertion\_sort: \-o significa "output" (saída). insertion\_sort será o nome do programa executável.

Execute o programa:  
		Bash:  
		./insertion\_sort

3. O programa irá:  
   * Mostrar os 5 números aleatórios originais.  
   * Mostrar os 5 números ordenados.  
   * Pedir que você digite um novo número.  
   * Mostrar o vetor final com 6 números, todos ordenados.

## **📚 Conceitos Demonstrados**

Este projeto é um ótimo exercício para entender:

* **Ponteiros e Memória Dinâmica:** A diferença entre a capacidade alocada (malloc(6 \* ...)) e o tamanho lógico atual de um vetor (n \= 5).  
* **Algoritmo de Ordenação (Insertion Sort):** Como funciona a lógica de deslocamento (vetor\[j \+ 1\] \= vetor\[j\]) para "abrir espaço" para a chave.  
* **Complexidade de Algoritmos:** A lógica de inserir um novo número em um vetor ordenado é uma operação de tempo $O(N)$ (linear), que é a base do Insertion Sort (que, por repetir isso N vezes, torna-se $O(N^2)$).

---

## **👨‍💻 Autores**

* **\[Thiago Pereira\]** \- \[[https://github.com/eupereirathiago](https://github.com/eupereirathiago)\]  
* **\[Thiago Pereira\]** \- \[[https://github.com/eupereirathiago](https://github.com/eupereirathiago)\]  
* **\[Thiago Pereira\]** \- \[[https://github.com/eupereirathiago](https://github.com/eupereirathiago)\]  
* **\[Thiago Pereira\]** \- \[[https://github.com/eupereirathiago](https://github.com/eupereirathiago)\]  
* **\[Thiago Pereira\]** \- \[[https://github.com/eupereirathiago](https://github.com/eupereirathiago)\]  
* **\[Thiago Pereira\]** \- \[https://github.com/eupereirathiago\]

## **📄 Licença**

Este projeto é de código aberto. Sinta-se à vontade para usá-lo como material de estudo.

