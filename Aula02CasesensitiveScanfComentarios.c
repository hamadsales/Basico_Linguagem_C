#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int numero; //declara uma variável  numero.

    printf("Digite um numero: "); //imprime uma frase na tela.

    scanf("%d", &numero); //lê um número digitado pelo usuário.
    getchar();            //zera o buffer do teclado.

    //outra forma

    printf("O numero informado eh %d", &numero);

    system("PAUSE");

    return 0;
}
