#ifndef MATRIZ_H
#define MATRIZ_H

       
   /**
    * @brief MatrizA Preenche os valores da matriz A
    * @param nlA Define o numero de linhas da matriz A
    * @param ncA Define o numero de colunas da matriz A
    * @param A Define o tamanho maximo da matriz A
    * @param a1 Define o menor valor do intervalo dos valores da matriz A
    * @param a2 Define o maior valor do intervalo dos valores da matriz A
    */
   extern void MatrizA(int nlA, int ncA, float A[10][10], int a1, int a2);
   /**
    * @brief MatrizB Preenche os valores da matriz B
    * @param nlB Define o numero de linhas da matriz B
    * @param ncB Define o numero de colunas da matriz B
    * @param B Define o tamanho da matriz B
    * @param b1 Define o menor valor do intervalo dos valores da matriz B
    * @param b2 Define o maior valor do intervalo dos valores da matriz B
    */
   extern void MatrizB(int nlB, int ncB, float B[10][10], int b1, int b2);
   /**
    * @brief Soma Realiza a soma das matrizes A e B, gerando a matriz C
    * @param A Pega os valores da Matriz A
    * @param B Pega os valores da matriz B
    * @param C Soma os valores de A e B correspondentes a cada posição e armazena em C
    */
   extern void Soma(float A[10][10], float B[10][10], float C[10][10]);
   /**
    * @brief Sub Realiza a subtração das matrizes A e B, gerando a matriz C
    * @param A Pega os valores da Matriz A
    * @param B Pega os valores da Matriz B
    * @param C Subtrai os valores de A e B correspondentes a cada posição e armazena em C
    */
   extern void Sub(float A[10][10], float B[10][10], float C[10][10]);
   /**
    * @brief Produto Realiza o produto das matrizes A e B, gerando a matriz C
    * @param A Pega os valores da Matriz A
    * @param B Pega os valores da Matriz B
    * @param C Pega os valores da Matriz C
    * @param nlA Pega os valores de cada linha de A
    * @param ncB Pega os valores de cada coluna de B
    * @param ncA multiplica cada elemento correspondente da linha de A pelo elemento correspondente da coluna de B e armazena o valor em C
    */
   extern void Produto(float A[10][10], float B[10][10], float C[10][10], int nlA, int ncB, int ncA);
   /**
    * @brief AtribuirA Atribui um valor para um elemento da matriz A
    * @param A Guarda esse valor na matriz A
    */
   extern void AtribuirA(float A[10][10]);
   /**
    * @brief AtribuirB Atribui um valor para um elemento da matriz B
    * @param B Guarda esse valor na matriz B
    */
   extern void AtribuirB(float B[10][10]);
   /**
    * @brief ImpA Imprime a matriz A
    * @param A Retorna os valores ja definidos de A
    * @param nlA Retorna o numero de linhas de A
    * @param ncA Retorna o numero de colunas de A
    * @param c1 Verifica se A ja foi definida
    */
   extern void ImpA(float A[10][10], int nlA, int ncA, int c1);
   /**
    * @brief ImpB Imprime a matriz B
    * @param B Retorna os valores ja definidos de A
    * @param nlB Retorna o numero de linhas de B
    * @param ncB Retorna o numero de colunas de B
    * @param c2 Verifica se B ja foi definida
    */
   extern void ImpB(float B[10][10], int nlB, int ncB, int c2);
   /**
    * @brief ImpC Imprime a matriz C
    * @param C Retorna os valores ja definidos na matriz C
    * @param nlA Retorna o numero de linhas de C
    * @param ncB Retorna o numero de colunas de C
    * @param c7 Verifica se a operacao realizada eh uma soma
    * @param c8 Verifica se a operacao realizada eh uma subtracao
    * @param c9 Verifica se a operacao realizada eh uma multiplicacao
    */
   extern void ImpC(float C[10][10], int nlA, int ncB, int c7, int c8, int c9);

#endif
