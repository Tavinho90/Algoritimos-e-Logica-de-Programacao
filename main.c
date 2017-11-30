#include <stdio.h>
#include <math.h>
#include <stdlib.h>// biblio para funções rand() e srand()
#include <time.h>// biblio para função time()
#include "matriz.h"


int main(){

  int op; //variável para o switch case
    int nlA, ncA, nlB, ncB;
    int i, j;
    int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0; //variaveis que conferem se passos amteriores foram realizados
    int a1, a2, b1, b2; //intervalos dos valores aleatórios
    float A[10][10];
    float B[10][10];
    float C[10][10];

    while(1!=0){
        printf("\n\nPROGRAMA DE MANIPULACAO DE MATRIZES \n"
       "(1) Definir o tamanho da matriz A \n"
       "(2) Definir o tamanho da matriz B \n"
       "(3) Preencher a matriz A com valores aleatorios \n"
       "(4) Preencher a matriz B com valores aleatorios \n"
       "(5) Atribuir valor para um elemento da matriz A \n"
       "(6) Atribuir valor para um elemento da matriz B \n"
       "(7) Calcular A+B \n"
       "(8) Calcular A-B \n"
       "(9) Calcular A*B \n"
       "(10) Imprimir matriz A \n"
       "(11) Imprimir matriz B \n"
       "(12) Imprimir matriz C \n"
       "(13) Imprimir as 3 matrizes \n"
       "(14) Sair \n"
       "\n"
       "digite sua operacao:\n");

    scanf("%d", &op);

    switch(op){

    case 1:
        printf("Digite a quantidade de linhas de A: ");
        scanf("%d", &nlA);
        printf("Digite a quantidade de colunas de A: ");
        scanf("%d", &ncA);

        c1=1;

        break;


    case 2:
        printf("Digite a quantidade de linhas de B: ");
        scanf("%d", &nlB);
        printf("Digite a quantidade de colunas de B: ");
        scanf("%d", &ncB);

        c2 = 1;

        break;


    case 3:
        if(c1==1){
            MatrizA(nlA, ncA, A, a1, a2);
        }

        else{
            printf ("Tamanho da matriz A nao definido");
        }

        break;


    case 4:
        if(c2==1){
            MatrizB(nlB, ncB, B, b1, b2);
        }

        else{
            printf("Tamanho da matriz B nao definido");
        }

        break;


    case 5:
        AtribuirA(A);
        break;


    case 6:
        AtribuirB(B);
        break;


    case 7:
        if((nlA == nlB) && (ncA == ncB)){
            Soma(A, B, C);
            c7=1;
            c8=0;
            c9=0;
        }

        else{
            printf("\nMatrizes de tamanhos diferentes, impossível somar!!\n");
        }

        break;


    case 8:
        if((nlA == nlB) && (ncA == ncB)){
            Sub(A, B, C);
            c7=0;
            c8=1;
            c9=0;
        }

        else{
            printf("\nMatrizes de tamanhos diferentes, impossível somar!!\n");
        }

        break;


    case 9:
        if(ncA == nlB){
            Produto(A, B, C, nlA, ncB, ncA);
            c7=0;
            c8=0;
            c9=1;
        }

        else{
            printf("Impossivel multiplicar: numero de colunas de A diferente de linhas de B!!!");
        }
        break;


    case 10:
        ImpA(A, nlA, ncA, c1);
        break;


    case 11:
        ImpB(B, nlB, ncB, c2);
        break;


    case 12:
        ImpC(C, nlA, ncB, c7, c8, c9);
        break;

    case 14:
        printf("\nFIM\n");
        return 0;


    case 13:

        for(i=0; i<nlA; i++){      //PRINTA A MATRIZ A
            printf("\n");
            for(j=0; j<ncA; j++){
                printf("%.2f   ", A[i][j]);
            }
        }
        printf("\n");

        for(i=0; i<nlB; i++){      //PRINTA A MATRIZ B
            printf("\n");
            for(j=0; j<ncB; j++){
                printf("%.2f   ", B[i][j]);
            }
        }
        printf("\n");

        for(i=0; i<nlA; i++){     //PRINTA A MATRIZ C
            printf("\n");
            for(j=0; j<ncB; j++){
                printf("%.2f   ", C[i][j]);
            }
        }
        printf("\n");


    } //fecha switch
    } //fecha while

    return 0;

}
