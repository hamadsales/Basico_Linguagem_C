#include <stdio.h>
#include <stdlib.h>
/*
variavel = variavel operador expressao

variavel operador= expressao
*/
int main(int argc, char const *argv[])
{
    int a=0,b=0,c=0,d=0;
    a++;
    b--;
    c+=a;
    d-=c;

    printf("a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);

    return 0;
}
