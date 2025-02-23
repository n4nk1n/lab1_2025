#include <stdio.h>
#include <stdlib.h>

//printf("", );
//scanf("", & );

int somTest();
int filtErat();

int i, n, divisor;

int main(){
    printf("insira dados para:\n");
    printf("iterador: ");
    scanf("%d", &i);
    printf("numero: ");
    scanf("%d", &n);
    printf("divisor: ");
    scanf("%d", &divisor);

}

int somTest(){
    int soma;
    soma = i + n + divisor;
    printf("a soma teste é %d\n", soma);
}

int filtErat(){
    int limSup, divisorTest; //limite superior e divisao teste
    printf("qual o maior que numero que deseja analisar?\n");
    scanf("%d", &limSup);
    while (i < limSup){
        divisorTest = limSup/i;
        printf("a divisao teste e %d", limSup/i);
    }
}