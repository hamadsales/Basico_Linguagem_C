#include <stdio.h>
#include <stdlib.h>
/*
Operadores:
AND &&
OR ||
NOT !

& bit and
| bit or
^ bit xor
<< shift left
>> shift right
~ bit not(complemento)
*/
int main(int argc, char const *argv[])
{
    char a = 1;
    char b = 2;
    char c = 3;
    char d = 1;

    if(a>b&&a<c)
    {
        printf("Condição 1 verdadeira");
    }
    if(c==d || d==a)
    {
        printf("Condição 2 verdadeira");
    }
    else
    {
        printf("nenhuma condição verdadeira");
    }
    return 0;
}
