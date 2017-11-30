#include "matriz.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
        /*int n1A;
        int ncA;
        int nlB;
        int ncB;
        int i;
        int j;
        int a1;
        int a2;
        int b1;
        int b2;
        int c1;
        int c2;
        int c3;
        int c4;
        int c5;
        int c6;
        int c7;
        int c8;
        int c9;
        float A [10][10];
        float B [10][10];
        float C [10][10];*/
void MatrizA(int nlA, int ncA, float A[10][10], int a1, int a2){  //preenche a matriz A com valores aleatorios

    int i, j;
    int opp; //auxilia em definir inteiro ou real
    float temp; //variavel temporária que armazena o valor aleatório

    printf("\nQual o intervalo de valores?\n");
    printf("Menor: ");
    scanf("%d", &a1);
    printf("Maior: ");
    scanf("%d", &a2);

    srand(time(NULL)); //semente para a funçao aleatoria

    printf("\nDeseja valores inteiros ou reais?\n"
           "(1) Inteiros \n"
           "(2) Reais\n");

    scanf("%d", &opp);
    printf(" - OK, matriz definida!");

    switch(opp){

    case 1:

        for(i=0; i<nlA; i++){
            for(j=0; j<ncA; j++){
                temp = rand() % (a2-a1 + 1); //cria uma faixa de numeros aleatorios
                A[i][j] = a1 + temp;  //acrescenta o menor numero do espaço aleatorio a faixa gerada
            }
        }
        break;

    case 2:

        for(i=0; i<nlA; i++){
            for(j=0; j<ncA; j++){
                temp = rand() % (100*(a2-a1)); //cria uma faixa de numeros aleatorios com um range 100x maior
                A[i][j] = a1 + (temp/100);  //acrescenta o limite inferior e adiciona duas casa decimais ao dividir por 100
            }
        }
        break;

    }
}

void MatrizB(int nlB, int ncB, float B[10][10], int b1, int b2){   //preeche a matriz B com valores aleatorios - ANALOGA A FUNÇÃO ANTERIOR

    int i, j;
    int opp;
    float temp;

    printf("Qual o intervalo de valores?\n");
    printf("Menor: ");
    scanf("%d", &b1);
    printf("Maior: ");
    scanf("%d", &b2);

    srand(time(NULL));

    printf("\nDeseja valores inteiros ou reais?\n"
           "(1) Inteiros \n"
           "(2) Reais\n");

    scanf("%d", &opp);

    switch(opp){

    case 1:

        for(i=0; i<nlB; i++){
            for(j=0; j<ncB; j++){
                temp = rand() % (b2 - b1 + 1);
                B[i][j] = temp + b1;
            }
        }
        break;

    case 2:

        for(i=0; i<nlB; i++){
            for(j=0; j<ncB; j++){
                temp = rand() % (100*(b2 - b1));
                B[i][j] = (temp/100) + b1;
            }
        }
        break;

    }
}

void Soma(float A[10][10], float B[10][10], float C[10][10]){  // Soma A+B e gera C

    int i, j;

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            C[i][j] = A[i][j] + B[i][j]; // Soma os valores de A e B correspondentes a posição e armazena em C
        }
    }

}

void Sub(float A[10][10], float B[10][10], float C[10][10]){   // Subtrai A-B e gera C

    int i, j;

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            C[i][j] = A[i][j] - B[i][j]; // Subtrai os valores de A e B correspondentes a posição e armazena em C
        }
    }
}

void Produto(float A[10][10], float B[10][10], float C[10][10], int nlA, int ncB, int ncA){  // Multiplica A*B e gera C

    int i, j, k;
    int temp;

    for(i=0; i<nlA; i++){
        for(j=0; j<ncB; j++){
            temp = 0;
            for(k=0; k<ncA; k++){
                temp = temp + A[i][k]*B[k][j]; //multiplica cada elemento correspondente da linha de A pelo a coluna de B,
            }                                   //faz a soma e armazena em C
            C[i][j] = temp;
        }
    }
}

void AtribuirA(float A[10][10]){  // Atribui uma valor para um elemento de A

    int l, c;

    printf("\nAtribuir valor para um elemento da matriz A");
    printf("\n-Qual a linha do elemento?");
    scanf("%d", &l);
    printf("-Qual a coluna do elemento?");
    scanf("%d", &c);
    printf("-Qual sera o seu valor?");
    scanf("%f", &A[l-1][c-1]); //uma vez que se começa em linha 0 e coluna 0, subtrai 1 pra compensar


}

void AtribuirB(float B[10][10]){  // Atribui um valor para um elemento de B - ANALOGA A ANTERIOR

    int l, c;

    printf("\nAtribuir valor para um elemento da matriz B");
    printf("\n-Qual a linha do elemento?");
    scanf("%d", &l);
    printf("-Qual a coluna do elemento?");
    scanf("%d", &c);
    printf("-Qual sera o seu valor?");
    scanf("%f", &B[l-1][c-1]);


}

void ImpA(float A[10][10], int nlA, int ncA, int c1){
    int i, j;

    if(c1 == 1){  //Verifica se A ja foi definida
        for(i=0; i<nlA; i++){      //PRINTA A MATRIZ A
            printf("\n");
            for(j=0; j<ncA; j++){
                printf("%.2f   ", A[i][j]);
            }
        }
    }

    else{
        printf ("Matriz A nao definida");
    }
}

void ImpB(float B[10][10], int nlB, int ncB, int c2){
    int i, j;

    if(c2==1){  //Verifica ser B ja foi definida
        for(i=0; i<nlB; i++){      //PRINTA A MATRIZ B
            printf("\n");
            for(j=0; j<ncB; j++){
                printf("%.2f   ", B[i][j]);
            }
        }
    }

    else{
        printf ("Matriz B nao definida");
    }
}

void ImpC(float C[10][10], int nlA, int ncB, int c7, int c8, int c9){
    int i, j;

        if(c7 == 1){  //Verifica se eh adiçao
            printf("\nC = A+B\n");
            for(i=0; i<nlA; i++){
                printf("\n");
                for(j=0; j<ncB; j++){
                    printf("%.2f   ", C[i][j]);
                }
            }
        }

        if(c8 == 1){  //Verifica se eh subtraçao
            printf("\nC = A-B\n");
            for(i=0; i<nlA; i++){
                printf("\n");
                for(j=0; j<ncB; j++){
                    printf("%.2f   ", C[i][j]);
                }
            }
        }

        if(c9 == 1){  //Verifica se eh multiplicaçao
            printf("\nC = A*B\n");
            for(i=0; i<nlA; i++){
                printf("\n");
                for(j=0; j<ncB; j++){
                    printf("%.2f   ", C[i][j]);
                }
            }
        }

        if((c7==0 && c8==0) && c9==0){  // Verifica se C ja foi definida
            printf("Matriz C nao definida");
        }
}
